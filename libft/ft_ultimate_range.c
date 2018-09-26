/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:21:50 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/21 16:05:59 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ultimate_range(int **range, int min, int max)
{
	int taille;
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	taille = max - min;
	tab = (int*)malloc(taille * sizeof(*tab));
	if (tab == 0)
		return (0);
	while (i <= taille)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (taille);
}
