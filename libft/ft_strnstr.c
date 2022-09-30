/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:16:25 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/26 19:15:03 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *nd, size_t n)
{
	size_t	i;

	i = 0;
	if (!ft_strlen(nd))
		return ((char *)hs);
	if (!ft_strlen(hs) || n < ft_strlen(nd))
		return (0);
	if (n == 0)
		return (0);
	while (i <= (n - ft_strlen(nd)) && hs[i] != 0)
	{
		if (ft_strncmp(&hs[i], nd, ft_strlen(nd)) == 0)
			return ((char *)&hs[i]);
		i++;
	}
	return (0);
}
