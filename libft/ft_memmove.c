/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:15:04 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/30 18:06:11 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	char	*dsttmp;

	tmp = ft_strdup((char*)src);
	dsttmp = (char*)dst;
	while (len--)
		*dsttmp++ = *tmp++;
	return (dst);
}
