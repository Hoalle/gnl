/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:35:08 by cperrard          #+#    #+#             */
/*   Updated: 2018/04/04 11:23:54 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 15
# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
