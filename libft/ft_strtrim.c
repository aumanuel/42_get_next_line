/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 03:57:07 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/06 06:08:01 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;
	char	*fresh;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
		return (ft_strnew(0));
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	fresh = ft_strnew(j - i + 1);
	if (!fresh)
		return (NULL);
	ret = fresh;
	while (i <= j && s[i])
		*fresh++ = s[i++];
	return (ret);
}
