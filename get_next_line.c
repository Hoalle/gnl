/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:15:32 by cperrard          #+#    #+#             */
/*   Updated: 2018/04/04 11:23:28 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int			ft_rest(char **str, char **line)
{
	char			*tmp;

	tmp = ft_strchr(*str, '\n');
	if (tmp)
	{
		*line = ft_strsub(*str, 0, tmp - *str);
		ft_memmove(*str, tmp + 1, ft_strlen(tmp));
		tmp = NULL;
		return (1);
	}
	return (0);
}

static int			ft_read(int fd, char **str, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				stop;
	char			*tmp;

	while ((stop = read(fd, buf, BUFF_SIZE)))
	{
		if (stop == -1)
			return (-1);
		buf[stop] = '\0';
		if (*str)
		{
			tmp = ft_strdup(*str);
			ft_memdel((void **)str);
			*str = ft_strjoin(tmp, buf);
			ft_memdel((void **)&tmp);
		}
		else
			*str = ft_strdup(buf);
		if (ft_rest(str, line))
			return (1);
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	static	char	*str;
	int				result;

	if (!line || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (str && ft_rest(&str, line))
		return (1);
	result = ft_read(fd, &str, line);
	if (result != 0)
		return (result);
	if (str == NULL || *str == '\0')
		return (0);
	*line = str;
	str = NULL;
	return (1);
}
