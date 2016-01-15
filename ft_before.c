/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 04:21:44 by acottier          #+#    #+#             */
/*   Updated: 2016/01/15 04:27:00 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

char	ft_before(char *ordre, char c)
{
	int	i;

	i = 1;
	if (!ordre || !c || c == ordre[0])
		return (0);
	while (ordre[i] != '\0')
	{
		if (ordre[i] == c)
			return (ordre[i - 1]);
		i++;
	}
	return (0);
}
