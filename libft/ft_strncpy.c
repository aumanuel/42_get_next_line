/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:49:34 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/06 06:17:10 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;

	i = 0;
	while (len && src[i])
	{
		dst[i] = src[i];
		len--;
		i++;
	}
	while (len)
	{
		dst[i] = '\0';
		len--;
		i++;
	}
	return (dst);
}
