/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 19:03:45 by daugier           #+#    #+#             */
/*   Updated: 2016/02/29 23:29:57 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_w(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (j);
}

static int	size(char const *s, char c, int i)
{
	int		j;

	j = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!(tab = (char**)malloc(sizeof(char*) * count_w(s, c) + 1)))
		return (0);
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			k = 0;
			if (!(tab[j] = (char*)malloc(sizeof(char) * size(s, c, i) + 1)))
				return (0);
			while (s[i] != c && s[i])
				tab[j][k++] = s[i++];
			tab[j][k] = '\0';
			j++;
			i--;
		}
	}
	tab[j] = 0;
	return (tab);
}
