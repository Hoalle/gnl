/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:07:08 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/22 13:51:46 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dest;
	size_t	size_src;

	j = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = size_dest;
	if (size <= 0)
		return (size_src);
	if (size > size_dest)
	{
		while (src[j] && i < (size - 1))
		{
			dest[i] = (char)src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (size_dest + size_src);
	}
	else
		return (size + size_src);
}
