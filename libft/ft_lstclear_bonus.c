/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:39:14 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/17 17:54:31 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	next = *lst;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = next;
	}
	free(*lst);
	*lst = NULL;
}
