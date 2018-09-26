/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:25:33 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/16 13:31:42 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long lnb;

	lnb = n;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb = -lnb;
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
	if (lnb <= 9)
		ft_putchar(lnb + 48);
}
