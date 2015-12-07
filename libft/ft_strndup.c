/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:08:57 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/04 15:54:12 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strndup(const char *str, size_t n)
{
	char	*copy;
	size_t	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	if (n < i)
		i = n;
	if (!(copy = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	copy[i] = '\0';
	while (i--)
		copy[i] = str[i];
	return (copy);
}
