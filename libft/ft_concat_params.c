/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:34:58 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/21 16:17:45 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_taille(int argc, char **argv)
{
	int			i;
	int			j;
	int			taille;

	i = 1;
	taille = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		taille = taille + j;
		i++;
	}
	return (taille);
}

char			*ft_concat_params(int argc, char **argv)
{
	char		*s;
	int			i;
	int			j;
	int			n;

	n = 0;
	i = 1;
	s = malloc(sizeof(char*) * (ft_taille(argc, argv)));
	if (s == NULL)
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			s[n] = argv[i][j];
			j++;
			n++;
		}
		s[n] = '\n';
		n++;
		i++;
	}
	s[n - 1] = '\0';
	return (s);
}
