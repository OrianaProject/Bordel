/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:25:17 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/27 17:05:41 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	result = (char*)malloc(sizeof(char) * (i + 1));
	while (s[j] != '\0')
	{
		result[j] = (*f)(j, s[j]);
		j++;
	}
	return (result);
}
