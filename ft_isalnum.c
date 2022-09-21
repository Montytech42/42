/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:24:12 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/17 18:36:22 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch);

int	ft_isdigit(int ch);

int	ft_isalnum(int ch)
{
	if (ft_isdigit(ch) == 1 || ft_isalpha(ch) == 1)
		return (1);
	else
		return (0);
}
