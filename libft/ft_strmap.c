/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:24:34 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/27 11:27:28 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
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
		result[j] = (*f)(s[j]);
		j++;
	}
	return (result);
}
