/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:24:26 by carlfern          #+#    #+#             */
/*   Updated: 2023/01/21 18:52:37 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print_hex2(unsigned long long num, char format);

int			ft_printptr(unsigned long long ptr);

static int	ft_ptr_len(unsigned long long ptr);

int	ft_print_hex(unsigned int num, char format)
{
	int	length;

	length = 1;
	ft_print_hex2(num, format);
	while (num > 15)
	{
		num = num / 16;
		length++;
	}
	return (length);
}

void	ft_print_hex2(unsigned long long num, char format)
{
	if (num >= 16)
	{
		ft_print_hex2(num / 16, format);
		ft_print_hex2(num % 16, format);
	}
	else
	{
		if (format == 'X')
			ft_putchar_fd("0123456789ABCDEF"[num], 1);
		else if (format == 'x')
			ft_putchar_fd("0123456789abcdef"[num], 1);
	}
	return ;
}

int	ft_printptr(unsigned long long ptr)
{
	int	i;
	int	length;

	i = 0;
	length = 2;
	write(1, "0x", 2);
	if (ptr == 0)
	{
		length += write(1, "0", 1);
	}
	else
	{
		ft_print_hex2(ptr, 'x');
		length += ft_ptr_len(ptr);
	}
	return (length);
}

static int	ft_ptr_len(unsigned long long ptr)
{
	int	length;

	length = 0;
	while (ptr > 0)
	{
		length++;
		ptr = ptr / 16;
	}
	return (length);
}
