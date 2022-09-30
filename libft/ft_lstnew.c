/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:06:33 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/27 15:50:27 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*nn;

	nn = (t_list *)malloc(sizeof (t_list));
	if (!nn)
		return (0);
	nn->content = content;
	nn->next = NULL;
	return (nn);
}
