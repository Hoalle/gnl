/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:35:38 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/16 13:44:20 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	int		*str;
	size_t	i;

	i = 0;
	if (!(str = (int *)malloc(sizeof(*str) * size)))
		return (0);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
