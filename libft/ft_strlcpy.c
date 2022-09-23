/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:51:45 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/22 16:15:55 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dsz)
{
	size_t	i;

	i = 0;
	if (dsz != 0)
	{
		while ((i < (dsz - 1)) && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = 0;
	}
	return (ft_strlen(src));
}
