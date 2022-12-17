/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:31:30 by carlfern          #+#    #+#             */
/*   Updated: 2022/12/08 13:13:57 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char *)s)[i])
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	tab[3] = {1, 2, 3};

	if (ft_memchr(tab, 0, 3) != NULL)
		printf("Encontró un 0");
	else
		printf("No encontró un 0");
}
*/