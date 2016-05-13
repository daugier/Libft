/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:14:24 by daugier           #+#    #+#             */
/*   Updated: 2016/05/13 17:14:26 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstat(t_list **list, unsigned int n)
{
	t_list			*buf;
	unsigned int	i;

	i = 0;
	buf = *list;
	if (!list)
		return (NULL);
	while (i < n)
		buf = buf->next;
	return (buf);
}
