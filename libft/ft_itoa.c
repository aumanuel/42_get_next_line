/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:13:49 by amanuel           #+#    #+#             */
/*   Updated: 2018/03/11 07:35:34 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_mall_size(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*fresh;
	int		j;

	j = ft_mall_size(n);
	if (!(fresh = ft_strnew(j)))
		return (NULL);
	if (n == 0)
		fresh[0] = '0';
	if (n < 0)
	{
		fresh[0] = '-';
		if (n == -2147483648)
		{
			fresh[--j] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (n && j >= 0)
	{
		fresh[--j] = n % 10 + '0';
		n = n / 10;
	}
	return (fresh);
}
