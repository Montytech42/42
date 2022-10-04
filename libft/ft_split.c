/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:19:38 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/30 20:25:03 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_counter(char const *s, char c);

static int		ft_word_size(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		wc;
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
	wc = ft_word_counter(s, c);
	ptr = (char **)malloc((wc + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			ptr[j] = ft_substr(&s[i], 0, ft_word_size(&s[i], c));
			i = i + ft_word_size(&s[i], c);
			j++;
		}
		else
			i++;
	}
	ptr[j] = 0;
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
