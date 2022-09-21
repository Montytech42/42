/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:03:31 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/20 13:39:17 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst || !src)
		return (0);
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
