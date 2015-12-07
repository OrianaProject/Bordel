/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:22:16 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/30 17:48:10 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char*)s;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (n--)
	{
		if (*tmp == (unsigned char)c)
			return (tmp);
		else
			tmp++;
	}
	return (0);
}
