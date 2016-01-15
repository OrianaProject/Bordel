/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 14:13:54 by acottier          #+#    #+#             */
/*   Updated: 2016/01/14 22:22:24 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

static int	ft_walkthrough(char **ordres)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (ordres[i])
	{
		if (ordres[i][0] != '\0')
			res++;
		i++;
	}
	return (res);
}

static int	ft_search(char **ordres, char letter)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ordres[i][j] != '\0')
	{
		while (ordres[i])
		{
			if (ordres[i][j] == letter)
				return (j);
			i++;
		}
		j++;
		i = 0;
	}
	return (0);
}

static void	ft_clear(char **ordres, int j, char letter)
{
	int	i;

	i = 0;
	while (ordres[i])
	{
		if (ordres[i][j] != letter)
			ft_strclr(ordres[i]);
		i++;
	}
}

char		*ft_solution(char **ordres)
{
	char	letter;
	int		i;

	i = 0;
	letter = 'A';
	while (ft_walkthrough(ordres) != 1)
	{
		ft_clear(ordres, ft_search(ordres, letter), letter);
		letter++;
	}
	while (ordres[i][0] == '\0')
		i++;
	return (ft_strdup(ordres[i]));
}
