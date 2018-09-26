/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:01:45 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/15 13:27:29 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*str;
	size_t	i;

	i = 0;
	dst = dest;
	str = (char*)src;
	while (i < n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}
