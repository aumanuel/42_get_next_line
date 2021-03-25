/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:58:43 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/06 01:50:12 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;

	i = 0;
	if (!(*to_find))
		return ((char*)str);
	while (*str)
	{
		while (str[i] == to_find[i] && str[i])
			i++;
		if (!(to_find[i]))
			return ((char*)str);
		i = 0;
		str++;
	}
	return (0);
}
