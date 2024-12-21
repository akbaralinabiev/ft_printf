/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:06:28 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/17 17:50:47 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
