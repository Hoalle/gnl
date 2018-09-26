/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:51:47 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/15 14:51:09 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	while (*str != c && i != 0)
	{
		i--;
		str--;
	}
	if (*str == c)
		return ((char*)str);
	return (0);
}
