/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:57:53 by cperrard          #+#    #+#             */
/*   Updated: 2018/03/19 11:24:33 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *s1, char *s2)
{
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	len = i + j + 1;
	return (len);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (s1 && s2)
	{
		if (!(str = (char *)malloc(sizeof(*str) *
						ft_len((char*)s1, (char*)s2))))
			return (0);
		i = 0;
		j = 0;
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			str[i + j] = s2[j];
			j++;
		}
		str[i + j] = '\0';
		return (str);
	}
	return (0);
}
