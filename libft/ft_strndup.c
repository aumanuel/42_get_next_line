/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strndup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 13:54:48 by amanuel           #+#    #+#             */
/*   Updated: 2018/03/18 18:51:46 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *str, size_t len)
{
	char	*buff;

	if (!str)
		return (NULL);
	if (len == 0)
		return (ft_strdup(""));
	if (!(buff = ft_strnew(len)))
		return (NULL);
	ft_strncpy(buff, str, len);
	return (buff);
}
