/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:33:01 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/25 16:00:51 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_number_size(int n);

int		ft_ten_power(int n);

char	*ft_itoa(int n);
{
	char	*ptr;
	int		i;
	int		ns;

	i = 0;
	ns = ft_number_size(n);
	ptr = (char)malloc(ns * sizeof(char));
	if (!ptr)
		return (0);
	if (n < 0)
	{
		ptr[i] = '-';
		n = -n;
		ns = ns - 1;
		i++;
	}
	while (n > 10)
	{
		ptr[i] = (n % ft_ten_power(ns - 1)) + '0';
	}
}

int		ft_number_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n < 9)
	{	
	n = n/10;
	size++;
	}
	size += 2;
	return (size);
}
