/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:58:22 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/16 13:32:05 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long lnb;

	lnb = n;
	if (lnb < 0)
	{
		ft_putchar_fd('-', fd);
		lnb = -lnb;
	}
	if (lnb > 9)
	{
		ft_putnbr_fd((lnb / 10), fd);
		ft_putnbr_fd((lnb % 10), fd);
	}
	if (lnb <= 9)
		ft_putchar_fd((lnb + 48), fd);
}
