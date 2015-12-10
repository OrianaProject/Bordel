/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:45:56 by gperroch          #+#    #+#             */
/*   Updated: 2015/12/10 15:06:13 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_start(char const *s)
{
	int i;
	int start;

	i = 0;
	start = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		start++;
		i++;
	}
	return (start);
}

static int		ft_end(char const *s, int len)
{
	int i;
	int end;

	i = len - 1;
	end = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		end++;
		i--;
	}
	return (end);
}

char			*ft_strtrim(char const *s)
{
	char	*copie;
	int		i;
	int		start;
	int		end;
	int		len;

	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	len = ft_strlen((char*)s);
	start = ft_start(s);
	end = ft_end(s, len);
	if (start == len)
		return (ft_strdup(""));
	if (!(copie = (char*)malloc(sizeof(char) * (len - start - end + 1))))
		return (0);
	i = 0;
	while (i < (len - start - end))
	{
		copie[i] = (char)s[i + start];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}
