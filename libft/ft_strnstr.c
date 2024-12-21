/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:51:10 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/17 17:51:08 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*search(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
		j = 0;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!len && (big == NULL || little == NULL))
		return ((char *)big);
	if (little[0] == '\0')
		return ((char *)big);
	return (search(big, little, len));
}
