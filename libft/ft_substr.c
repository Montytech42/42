/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:44:53 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/30 20:25:51 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen (s + start) < len)
		len = ft_strlen(s + start);
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
