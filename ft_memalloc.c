/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 16:03:48 by daugier           #+#    #+#             */
/*   Updated: 2016/02/27 23:00:24 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;
	int		i;

	i = 0;
	if (!(str = (void*)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
