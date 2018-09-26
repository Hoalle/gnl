/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 12:55:27 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/23 13:03:00 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *src, const char *obj, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (obj[0] == '\0')
		return ((char*)src);
	while (src[i] && i < n)
	{
		while (src[i + j] == obj[j] && (i + j) < n)
		{
			j++;
			if (obj[j] == '\0')
				return ((char*)&src[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
