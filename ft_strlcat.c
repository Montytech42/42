/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:35:50 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 14:32:17 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dsz)
{
	size_t	i;
	size_t	dl;

	dl = ft_strlen(dst);
	if (dsz <= dl || dsz == 0)
		return (ft_strlen(src) + dsz);
	i = 0;
	while (src[i] != 0 && i < (dsz - dl - 1))
	{
		dst[i + dl] = src[i];
		i++;
	}
	dst[i + dl] = 0;
	return (dl + ft_strlen(src));
}
