/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:53:34 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/06 04:45:57 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char		*fresh;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(fresh = (char*)malloc((sizeof(char) * ++len))))
		return (NULL);
	while (--len)
		fresh[i++] = s[start++];
	fresh[i] = '\0';
	return (fresh);
}
