/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 23:55:34 by daugier           #+#    #+#             */
/*   Updated: 2016/06/20 00:05:31 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*get_file(char *av)
{
	int		fd;
	char	*str;
	char	*tmp;

	str = (char*)malloc(sizeof(char) * 1);
	str[0] = '\0';
	if ((fd = open(av, O_RDONLY)) == -1)
		return (NULL);
	while (get_next_line((int const)fd, &tmp))
	{
		str = ft_strjoin_f(str, tmp);
		free(tmp);
		tmp = NULL;
	}
	return (str);
}
