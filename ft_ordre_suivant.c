/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ordre_suivant.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 22:56:30 by acottier          #+#    #+#             */
/*   Updated: 2016/01/15 02:22:37 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/fillit.h"

static void	ft_swap(char *ordre, char *tmp)
{
	char	swap;

	swap = *tmp;
	*tmp = *ordre;
	*ordre = swap;
}

static void	ft_triage(char *tmp)
{
	int	i;

	i = 0;
	while (tmp[i + 1] != '\0')
	{
		if (tmp[i + 1] < tmp[i])
		{
			ft_swap(&tmp[i + 1], &tmp[i]);
			i = 0;
		}
		else
			i++;
	}
}

static int	ft_analyse(char *ordre, char *tmp)
{
	int	i;

	i = 0;
	while (ordre[ft_strlen(ordre) - 1] > tmp[i] && tmp[i])
		i++;
	if (tmp[i] == '\0')
		return (-1);
	return (i);
}

char		*ft_ordre_suivant(char *ordre)
{
	int		i;
	int		j;
	int		index;
	char	*tmp;

	i = (int)(ft_strlen(ordre) - 1);
	j = 0;
	tmp = ft_strnew(i + 2);
	tmp[j] = ordre[i];
	ordre[i] = 0;
	while ((index = ft_analyse(ordre, tmp)) == -1)
	{
		if (ordre[0] == 0)
			return (ft_strdup("! LE PUTAIN DE DERNIER ORDRE !"));
		tmp[(int)ft_strlen(tmp)] = ordre[(int)ft_strlen(ordre) - 1];
		ordre[(int)ft_strlen(ordre) - 1] = '\0';
	}
	ft_swap((&ordre[(int)ft_strlen(ordre) - 1]), &tmp[index]);
	ft_triage(tmp);
	return (ft_strjoin(ordre, tmp));
}
