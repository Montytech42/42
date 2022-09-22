/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:50:38 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 19:54:46 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include<stdio.h>
#include<stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src,  size_t n);

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dsz);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		tl;

	tl = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(tl * sizeof(char));
	if (!ptr)
		return(0);
	ptr = ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_strlcat(ptr, s2, tl);
	return(ptr);
}
/*
int	main(void)
{
	char const	*s1 = "Texto  de prueba";
	char const	*s2 = "Texto ampliado";
	char		*ptr;

	ptr = ft_strjoin(s1, s2);
	printf("%s", ptr);
	return(0);
}*/