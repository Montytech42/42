/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:23:34 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/29 14:44:02 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*temp;
	t_list	*curr;

	if (*lst == NULL)
		return ;
	curr = *lst;
	while (curr != NULL)
	{
		del(curr->content);
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*lst = NULL;
}
