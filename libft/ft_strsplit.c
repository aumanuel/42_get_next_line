/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 16:02:13 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/12 16:24:11 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		**ft_split(char const *str, int mal2, char c, int i)
{
	char		**tab;

	while (*str == c && *str)
		str++;
	while (str[i] != c && str[i] && *str)
		i++;
	if (!(*str))
	{
		if (!(tab = (char**)malloc(sizeof(char*) * (mal2 + 1))))
			return (NULL);
		tab[mal2] = 0;
		return (tab);
	}
	if (!(tab = ft_split(str + i, mal2 + 1, c, 0)))
		return (NULL);
	if (!(tab[mal2] = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = -1;
	while (str[++i] != c && str[i])
		tab[mal2][i] = str[i];
	tab[mal2][i] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	if (!s || !c)
		return (NULL);
	return (ft_split(s, 0, c, 0));
}
