/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:25:53 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/13 20:48:19 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)(s + i));
	while (i--)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
