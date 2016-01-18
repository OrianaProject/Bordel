/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_restante.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 14:39:39 by acottier          #+#    #+#             */
/*   Updated: 2016/01/18 16:05:58 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

static int	ft_surface(char **map, int limite, int i, int j)
{
	int	res;
	
	res = 0;
	while (i < limite)
	{
		j = 0;
		while (j < limite)
		{
			if (map[i][j] == '.')
				res++;
			j++;
		}
		i++;
	}
	ft_placement_gamma('$', map);
	return (res);
}

static int	ft_nb_adjacent(char **map, int i, int j, int limite)
{
	int		res;

	res = 0;
	if (i > 0 && j >= 0 && map[i - 1][j] == '.')
		res++;
	if (i >= 0 && j < limite && map[i][j + 1] == '.')
		res++;
	if (i < limite - 1 && j >= 0 && map[i + 1][j] == '.')
		res++;
	if (i >= 0 && j > 0 && map[i][j - 1] == '.')
		res++;
	return (res);
}

static void	ft_epuration(char **map, int limite, int i, int j)
{
	while (i < limite)
	{
		j = 0;
		while (j < limite)
		{
			if (map[i][j] == '.')
			{
				if (ft_nb_adjacent(map, i, j, limite) == 0)
					map[i][j] = '$';
			}
			j++;
		}
		i++;
	}
}

static void	ft_search(char letter, char **map, int *i, int *j)
{
	while (map[*i][*j] != letter)
	{
		*j = 0;
		while (map[*i][*j] != letter && map[*i][*j])
			(*j)++;
		(*i)++;
	}
	(*i)--;
}

int		ft_place_restante(char **map, char *ordre, int limite, char letter)
{
	int		i;
	int		j;
	int		nb;
	int		res;

	i = 0;
	j = 0;
	ft_search(letter, map, &i, &j);
	while (*ordre != letter)
		ordre++;
	nb = ft_strlen(ordre) - 1;
	ft_epuration(map, limite, i, j);
	res = ft_surface(map, limite, i, j);
	if (res < nb * 4)
		return (-1);
	return (0);
}
