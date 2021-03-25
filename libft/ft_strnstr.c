/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:58:43 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/06 02:11:31 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;

	j = -1;
	if (!(*to_find))
		return ((char*)str);
	while (str[++j])
	{
		i = 0;
		while (str[i + j] == to_find[i] && str[i + j] && i + j < len)
			i++;
		if (!(to_find[i]))
			return ((char*)&str[j]);
	}
	return (0);
}
