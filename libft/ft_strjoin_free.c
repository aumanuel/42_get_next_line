/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 18:58:20 by amanuel           #+#    #+#             */
/*   Updated: 2018/03/19 01:35:38 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int i, int j)
{
	char	*tab;

	if (!(tab = ft_strjoin((const char*)s1, (const char*)s2)))
		return (NULL);
	if (i == 1)
		ft_strclr(s1);
	if (i == 2)
		free(s1);
	if (j == 1)
		ft_strclr(s2);
	if (j == 2)
		free(s2);
	return (tab);
}
