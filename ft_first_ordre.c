/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_ordre.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 06:12:04 by acottier          #+#    #+#             */
/*   Updated: 2016/01/15 06:19:56 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

char	*ft_first_ordre(t_list_tetriminos list)
{
	int		i;
	char	*res;

	i = 0;
	while (list.next != NULL)
		i++;
	if (!(res = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (res[i] != '\0')
	{
		res[i] = 'A' + i;
		i++;
	}
	return (res);
}
