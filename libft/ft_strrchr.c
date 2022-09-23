/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:21:57 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/22 18:09:52 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	flag;

	i = 0;
	flag = -1;
	while (s[i] != 0)
	{
		if ((char)c == s[i])
			flag = i;
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	else if (flag == -1)
		return (0);
	return ((char *)&s[flag]);
}
