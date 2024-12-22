/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:06:28 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:13:51 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		l;
	t_list	*current;

	if (!lst)
		return (0);
	l = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		l++;
	}
	return (l);
}
