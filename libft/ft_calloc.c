/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:12:17 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 19:38:05 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
