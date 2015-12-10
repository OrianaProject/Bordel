/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:14:55 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/10 11:11:19 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;
	void	*contentptr;

	if (!(ptr = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
	}
	else
	{
		contentptr = ft_memalloc(content_size);
		ft_memcpy(contentptr, content, content_size);
		ptr->content = contentptr;
		ptr->content_size = content_size;
	}
	ptr->next = NULL;
	return (ptr);
}
