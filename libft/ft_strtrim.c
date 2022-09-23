/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:21:57 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/23 14:35:28 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = (int)ft_strlen(s1);
	ptr = (char *)malloc((end + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (ft_strchr(set, s1[i]) != 0 && end > start++)
	{
		i++;
	}
	while (ft_strchr(set, s1[end]) != 0 && end > start)
			end--;
	i = 0;
	while (i <= (end - start) && end > start)
	{
		ptr[i] = s1[i + start];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
