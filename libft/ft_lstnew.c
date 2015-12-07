/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:14:55 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/30 18:36:31 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ptr;

	if (!(ptr = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
	}
	else
	{
		ptr->content = (void*)content;
		ptr->content_size = content_size;
	}
	ptr->next = NULL;
	return (ptr);
}
