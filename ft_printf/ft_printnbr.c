/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:30:52 by carlfern          #+#    #+#             */
/*   Updated: 2023/01/11 14:17:27 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int num)
{
	int	length;

	length = ft_nbr_len(num);
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}	
	else if (num < 0)
	{
		write (1, "-", 1);
		num = -num;
	}
	ft_putnbr_fd_ull(num, 1);
	return (length);
}

int	ft_nbr_len(int num)
{	
	int	length;

	length = 1;
	if (num == -2147483648)
		length = 11;
	else if (num < 0)
	{
		num = -num;
		length++;
	}
	while (num > 9)
	{
		length++;
		num = num / 10;
	}
	return (length);
}

void	ft_putnbr_fd_ull(unsigned long long n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd_ull(n / 10, fd);
		write(fd, &("0123456789")[n % 10], 1);
	}
	else
		write(fd, &("0123456789")[n], 1);
}

int	ft_printnbr_u(unsigned int num)
{
	int	length;

	length = 1;
	ft_putnbr_fd_ull(num, 1);
	while (num > 9)
	{
		length++;
		num = num / 10;
	}
	return (length);
}
