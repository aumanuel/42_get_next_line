/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 22:09:01 by amanuel           #+#    #+#             */
/*   Updated: 2017/11/22 16:17:59 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb >= 0)
		{
			if (nb == 0)
				ft_putchar('0');
			else
			{
				if (nb >= 10)
					ft_putnbr(nb / 10);
				ft_putchar(nb % 10 + '0');
			}
		}
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
}
