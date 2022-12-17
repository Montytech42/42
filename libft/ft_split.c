/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:19:38 by carlfern          #+#    #+#             */
/*   Updated: 2022/12/12 13:36:21 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_counter(char const *s, char c);

static int		ft_word_size(char const *s, char c);

static void		ft_freeptr(char **ptr, int i);

char	**ft_split(char const *s, char c)
{
	int		ind[3];
	char	**ptr;

	ft_bzero(ind, 3 * sizeof (int));
	ptr = (char **)malloc((ft_word_counter(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	while (s[ind[1]] != 0)
	{
		if (s[ind[1]] != c)
		{
			ptr[ind[2]] = ft_substr(&s[ind[1]], 0, ft_word_size(&s[ind[1]], c));
			if (!ptr[ind[2]])
			{
				ft_freeptr(ptr, ind[2]);
				return (NULL);
			}
			ind[1] = ind[1] + ft_word_size(&s[ind[1]], c);
			ind[2]++;
		}
		else
			ind[1]++;
	}
	ptr[ind[2]] = 0;
	return (ptr);
}

static int	ft_word_counter(char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
			j++;
		else
			j = 0;
		if (j == 1)
			k++;
		i++;
	}
	return (k);
}

static int	ft_word_size(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			j++;
			if (s[i + 1] == c || s[i + 1] == 0)
				return (j);
		}
		i++;
	}
	return (j);
}

static void	ft_freeptr(char **ptr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(ptr[j]);
		j++;
	}
	free(ptr);
	return ;
}
