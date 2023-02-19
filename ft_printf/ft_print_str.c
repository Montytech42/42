/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:31:40 by carlfern          #+#    #+#             */
/*   Updated: 2023/01/21 18:50:30 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;
	int	length;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd (str, 1);
	length = (int)ft_strlen(str);
	return (length);
}

int	ft_print_char(int c)
{
	int	length;

	length = write (1, &c, 1);
	return (length);
}
