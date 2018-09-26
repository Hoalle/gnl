/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:54:18 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/22 14:11:16 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		tmp;

	i = 0;
	if (s)
	{
		if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
			return (0);
		tmp = start;
		while (start < (len + tmp))
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
