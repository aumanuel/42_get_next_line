/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:23:16 by amanuel           #+#    #+#             */
/*   Updated: 2017/12/04 17:46:12 by amanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*linked;

	fresh = (*f)(lst);
	linked = fresh;
	if (!lst || !f)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		linked->next = (*f)(lst);
		linked = linked->next;
	}
	return (fresh);
}
