/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:17:57 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/10 14:57:44 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*copie;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(copie = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < (int)len)
	{
		copie[i] = (char)s[start + i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}
