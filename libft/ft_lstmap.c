/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:08:22 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/22 11:47:51 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *newtmp;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new = f(lst);
	newtmp = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = f(lst);
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	return (newtmp);
}
