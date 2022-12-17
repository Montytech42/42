/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:03:31 by carlfern          #+#    #+#             */
/*   Updated: 2022/12/08 13:13:44 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	else if (!n || dst == src)
		return (dst);
	else
	{
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}
/*
int	main(void)
{
	char	str1mc[20] = "Start sTOP";
	char	str2mc[20] = "Prueba";
	char	*dstmc;
	char	str1mm[20] = "Start sTOP";
	char	str2mm[20] = "Prueba";
	char	*dstmm;


//	dstmc = ft_memcpy(str2mc, str1mc, 20);
//	dstmm = ft_memmove(str2mm, str1mm, 20);
	dstmc = ft_memcpy(&str1mc[3], str1mc, 5);
	dstmm = ft_memmove(&str1mm[3], str1mm, 5);
	printf("memcpy\n%s\n%s\n", str1mc, dstmc);
	printf("memmove\n%s\n%s\n", str1mm, dstmm);
	return (0);
}*/
