/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:44:53 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 18:51:05 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc((1 + len) * sizeof(char));
	if (!ptr)
		return (0);
	while (i < (int)len && s[i + (int)start] != 0)
	{
		ptr[i] = s[i + (int)start];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
