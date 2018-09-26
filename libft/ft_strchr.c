/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:37:30 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/15 14:39:54 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (*str)
			str++;
		return ((char*)str);
	}
	while (*str)
	{
		if (*str == c)
			return ((char*)str);
		str++;
	}
	return (0);
}
