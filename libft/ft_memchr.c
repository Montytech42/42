/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:31:30 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 19:38:05 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((int *)s)[i] != 0)
	{
		if ((unsigned char)c == ((unsigned char *)s)[i])
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
