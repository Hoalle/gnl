/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:20:58 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/16 15:35:59 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*str;
	size_t	i;

	i = 0;
	str = (char*)src;
	dst = dest;
	if (dest > src)
	{
		while (n--)
			dst[n] = str[n];
	}
	if (dest < src)
	{
		while (i < n)
		{
			dst[i] = str[i];
			i++;
		}
	}
	return (dest);
}
