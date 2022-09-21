/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:50:38 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 19:11:02 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		tl;

	tl = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(tl * sizeof(char));
	if (!ptr)
		return(0);

}
