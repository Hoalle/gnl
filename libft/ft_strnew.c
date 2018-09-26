/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:01:22 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/22 16:04:28 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(*str) * size + 1)))
		return (0);
	ft_memset(str, '\0', size + 1);
	return (str);
}
