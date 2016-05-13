/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 15:17:48 by daugier           #+#    #+#             */
/*   Updated: 2016/03/02 15:54:59 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t len)
{
	size_t			i;
	unsigned char	*t_dst;
	unsigned char	*t_src;

	i = 0;
	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	while (len--)
	{
		t_dst[i] = t_src[i];
		i++;
	}
	return (dst);
}
