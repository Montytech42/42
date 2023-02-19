/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:12:31 by carlfern          #+#    #+#             */
/*   Updated: 2023/02/19 12:21:00 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr( char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != 0)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*tmp;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1)
		s1 = (char *)ft_calloc(1, sizeof (char));
	if (!s1 || !s2)
		return (NULL);
	tmp = (char *)ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tmp)
		return (NULL);
	while (s1[++i] != 0)
		tmp[i] = s1[i];
	while (s2[j] != '\0')
		tmp[i++] = s2[j++];
	tmp[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (tmp);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(int count, int size)
{
	void	*ptr;
	int		i;
	int		tl;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	tl = (count * size);
	while (i < tl)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
