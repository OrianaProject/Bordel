/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:49:20 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/04 15:00:31 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstdup(t_list *beginlist)
{
	t_list	*begin_newlist;
	t_list	*tmp;
	t_list	*tmp2;

	if (!beginlist)
		return (NULL);
	begin_newlist = ft_lstnew(beginlist->content, beginlist->content_size);
	tmp = begin_newlist;
	tmp2 = beginlist->next;
	while (tmp2 != NULL)
	{
		tmp->next = ft_lstnew(tmp2->content, tmp2->content_size);
		tmp = tmp->next;
		tmp2 = tmp2->next;
	}
	tmp->next = NULL;
	return (begin_newlist);
}
