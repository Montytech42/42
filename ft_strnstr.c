/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:16:25 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 13:04:01 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stddef.h>
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *str);

char	*ft_strnstr(const char *hs, const char * nd, size_t n)
{
	size_t	i;

	i = 0;
	while (i < (n - ft_strlen(nd)) && hs[i] != 0)
	{
		if (ft_strncmp(&hs[i], nd, ft_strlen(nd)) == 0)
			return ((char *)&hs[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*hs = "Foo Bar Baz";
	char	*nd = "Bar";
	size_t	n = 11;

	printf("%s", ft_strnstr(hs, nd, n));
	printf("\n%s", strnstr(hs, nd, n));
	return (0);
}*/
