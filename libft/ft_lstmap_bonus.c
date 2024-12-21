/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:43:34 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/17 17:51:37 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l_new;
	t_list	*node;

	l_new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
			ft_lstclear(&l_new, del);
		ft_lstadd_back(&l_new, node);
		lst = lst->next;
	}
	return (l_new);
}
