/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:32:26 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/06 00:04:19 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*strdst;
	char	*strsrc;

	strdst = (char*)dst;
	strsrc = (char*)src;
	if (strsrc < strdst)
		while (len--)
			strdst[len] = strsrc[len];
	else
		ft_memcpy(strdst, strsrc, len);
	return (dst);
}
