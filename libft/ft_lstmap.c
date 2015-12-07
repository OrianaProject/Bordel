/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:56:48 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/30 19:10:00 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *new2;
	t_list *newlst;
	t_list *tmp;

	tmp = lst;
	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new = f(tmp);
	tmp = tmp->next;
	newlst = new;
	while (tmp)
	{
		if (!(new2 = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		new2 = f(tmp);
		new->next = new2;
		new = new2;
		free(new2);
		tmp = tmp->next;
	}
	return (newlst);
}
