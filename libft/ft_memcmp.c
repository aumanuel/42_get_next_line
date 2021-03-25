/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:51:33 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/08 06:47:41 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*strs1;
	unsigned char	*strs2;

	strs1 = (unsigned char*)s1;
	strs2 = (unsigned char*)s2;
	while (n && *strs1 == *strs2)
	{
		strs1++;
		strs2++;
		n--;
	}
	if (n == 0)
		return (0);
	if (*strs1 != *strs2)
		return (*strs1 - *strs2);
	return (0);
}
