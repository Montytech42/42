/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:11:52 by carlfern          #+#    #+#             */
/*   Updated: 2023/02/18 12:51:04 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_varstat(int fd, char *varstat);

char	*ft_get_line(char *str);

char	*ft_update_varstat(char *str);

int		ft_strlen(char *str);

char	*get_next_line(int fd)
{
	char		*line;
	static char	*varstat;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free (varstat);
		varstat = NULL;
		return (NULL);
	}
	varstat = ft_get_varstat(fd, varstat);
	if (!varstat)
		return (NULL);
	line = ft_get_line(varstat);
	varstat = ft_update_varstat(varstat);
	return (line);
}

char	*ft_get_varstat(int fd, char *varstat)
{
	char	*tmp;
	int		read_b;

	tmp = (char *)ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	read_b = 1;
	while (read_b != 0 && !ft_strchr(tmp, '\n'))
	{
		read_b = read(fd, tmp, BUFFER_SIZE);
		if (read_b == -1)
		{
			free (tmp);
			free (varstat);
			return (NULL);
		}
		tmp[read_b] = '\0';
		varstat = ft_strjoin(varstat, tmp);
	}
	free(tmp);
	return (varstat);
}

char	*ft_get_line(char *varstat)
{
	char	*str;
	int		i;

	i = 0;
	if (!varstat[i])
		return (NULL);
	while (varstat[i] && varstat[i] != '\n')
		i++;
	str = (char *)ft_calloc(sizeof(char), (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (varstat[i] && varstat[i] != '\n')
	{
		str[i] = varstat[i];
		i++;
	}
	if (varstat[i] == '\n')
	{
		str[i] = '\n';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_update_varstat(char *varstat)
{
	char	*new_buff;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (varstat[i] && varstat[i] != '\n')
		i++;
	if (!varstat[i])
	{
		free (varstat);
		return (0);
	}
	new_buff = (char *)ft_calloc(sizeof (char), (ft_strlen(varstat) - i + 1));
	if (!new_buff)
		return (0);
	i++;
	while (varstat[i])
		new_buff[j++] = varstat[i++];
	varstat[j] = 0;
	free (varstat);
	return (new_buff);
}

/*
int	main(void)
{
	char	*line;
	int		i;
//	int		fd1;
//	int		fd2;
	int		fd3;
	
//	fd1 = open("tests/test.txt", O_RDONLY);
//	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/1char.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
//		line = get_next_line(fd1);
//		printf("line [%02d]: %s", i, line);
//		free(line);
//		line = get_next_line(fd2);
//		printf("line [%02d]: %s", i, line);
//		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
//	close(fd1);
//	close(fd2);
	close(fd3);
//	system("leaks a.out");
	return (0);
}*/
