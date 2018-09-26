/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:10:03 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/22 14:47:55 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char*)dest++ = *(unsigned char*)src;
		if (*(unsigned char*)src++ == (unsigned char)c)
			return ((unsigned char*)dest);
	}
	return (0);
}
