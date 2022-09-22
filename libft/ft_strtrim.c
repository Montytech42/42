/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:21:57 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/22 14:06:02 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *hs, const char *nd, size_t n);

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dsz);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	ptr = (char *)malloc((strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return(0);
	if (ft_strnstr(s1, set, ft_strlen(set)) != 0)
		i = strlen(set);
	while (i < (strlen(s1) - ft_strlen(set)))
		ptr[j++] = s1[i++];
	if (ft_strnstr(&s1[i], set, ft_strlen(set)) != 0)
		ft_strlcat(ptr, &s1[i], ft_strlen(&s1[i]));
	else
		ptr[j] = 0;
	return(ptr);
}
int	main(void)
{
	char const	*s1 = "Texto de prueba";
	char const	*set = "Tex";
	char 		*ptr;

	ptr = ft_strtrim(s1, set);
	printf("%s", ptr);
	free(ptr);
	return(0);
}
