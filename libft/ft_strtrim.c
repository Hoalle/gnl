/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:03:25 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/23 13:16:06 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	i = ft_strlen(s) - 1;
	j = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j++;
	if (s[j] == '\0')
	{
		str = (char*)malloc(sizeof(*str) * 1);
		return (ft_memset((void*)str, '\0', 1));
	}
	if (!(str = (char*)malloc(sizeof(*str) * (i - j) + 2)) || s == 0)
		return (0);
	while (j <= i)
		str[k++] = s[j++];
	str[k] = '\0';
	return (str);
}
