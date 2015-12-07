/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:33:45 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/30 17:42:52 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	const char	*tmp;
	int			i;
	int			res;

	res = 0;
	i = 0;
	if (str == NULL)
		return (0);
	tmp = ft_strtrim(str);
	while (tmp[i] == '\r' || tmp[i] == '\f' || tmp[i] == '\v')
		i++;
	tmp = &tmp[i];
	i = 0;
	if (tmp[i] != '-' && tmp[i] != '+' && (tmp[i] > '9' || tmp[i] < '0'))
		return (0);
	else if (tmp[i] <= '9' && tmp[i] >= '0')
		i--;
	while (tmp[++i] != '\0' && tmp[i] <= '9' && tmp[i] >= '0')
		res = res * 10 + (tmp[i] - '0');
	if (tmp[0] == '-')
		res = -res;
	return (res);
}
