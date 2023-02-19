/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:14:55 by carlfern          #+#    #+#             */
/*   Updated: 2023/01/10 17:44:59 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

int		ft_printf(char const *str, ...);
int		ft_print_type(va_list args, const char format);
int		ft_print_char(int c);
int		ft_printstr(char *str);
int		ft_printptr(unsigned long long ptr);
int		ft_printnbr(int num);
int		ft_nbr_len(int num);
int		ft_printnbr_u(unsigned int num);
void	ft_putnbr_fd_ull(unsigned long long n, int fd);
int		ft_print_hex(unsigned int num, char format);
void	ft_print_hex2(unsigned long long num, char format);

#endif
