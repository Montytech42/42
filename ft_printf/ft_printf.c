/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:05:41 by carlfern          #+#    #+#             */
/*   Updated: 2023/01/21 18:51:32 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_type(va_list args, const char format);

int	ft_printf(char const *str, ...)
{
	int			i;
	int			count;
	int			length;
	va_list		args;

	i = 0;
	count = 0;
	length = 0;
	va_start(args, str);
	while (str[i] != 0)
	{
		if (str[i] == '%')
			length += ft_print_type(args, str[++i]);
		else
		{
			count = ft_print_char(str[i]);
			if (count == -1)
				return (-1);
			else
				length += count;
		}
		i++;
	}
	va_end(args);
	return (length);
}

int	ft_print_type(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = ft_print_char(va_arg(args, int));
	else if (format == 's')
		length = ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		length = ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		length = ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		length = ft_printnbr_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		length = ft_print_char('%');
	return (length);
}
