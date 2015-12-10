/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:39:47 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/10 15:28:40 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tmp;
	t_list *tmp2;

	if (!lst || !f)
		return ;
	tmp = lst;
	tmp2 = lst->next;
	while (tmp2 != NULL)
	{
		f(tmp);
		tmp = tmp2;
		tmp2 = tmp2->next;
	}
	f(tmp);
}
