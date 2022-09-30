/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:33:01 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/26 13:27:28 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int		ft_number_size(int n);

char	*ft_strjoin(char const *s1, char const *s2);

void	*ft_calloc(size_t count, size_t size);

char	*ft_putstrnbr(int n, int ns);

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		ns;
	int		os;

	i = 0;
	ns = ft_number_size(n);
	os = ns;
	ptr = (char *)ft_calloc(ns, sizeof(char));
	if (!ptr)
		return (0);
	if (n == -2147483648)
	{
		ptr[0] = '-';
		ptr[1] = '2';
		n = 147483648;
		ns = ns - 2;
	}
	else if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
		ns = ns - 1;
	}
//	ft_strlcat(ptr, ft_putstrnbr(n, ns - 1), os);
//	ptr = ft_strjoin(ptr, ft_putstrnbr(n, ns - 1));
	return (ptr);
}

char	*ft_putstrnbr(int n, int ns)
{
	char	*nbr;

	nbr = (char *)malloc(ns * sizeof(char));
	if (!nbr)
		return (0);
	nbr[ns] = 0;
	ns--;
	while (ns >= 0)
	{
		nbr[ns] = (n % 10) + '0';
		n = n / 10;
		ns--;
	}
	return (nbr);
}

int	ft_number_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (12);
	else if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 9)
	{	
		n = n / 10;
		size++;
	}
	size += 2;
	return (size);
}/*

int	main(void)
{
	int		nb;
	char	*nbr;

	nb = -354;
	nbr = ft_itoa(nb);
	printf("%s", nbr);
	free(nbr);
}*/
