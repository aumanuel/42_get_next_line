/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 03:28:45 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/07 01:09:17 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*fresh;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	fresh = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (!fresh)
		return (NULL);
	ret = fresh;
	while (*s1)
		*fresh++ = *s1++;
	while (*s2)
		*fresh++ = *s2++;
	*fresh = '\0';
	return (ret);
}
