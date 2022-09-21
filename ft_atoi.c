/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:17:43 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/21 13:55:16 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int	sign;
	int	nb;
	
	i = 0;
	sign = 1;
	nb = 0;
	if (!str)
		return (0);
	while (str[i] > 0 && str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	return (nb * sign);
}

int	main(void)
{
	const char *str = " 	342345";

	printf("%d", ft_atoi(str));
	return (0);
}
