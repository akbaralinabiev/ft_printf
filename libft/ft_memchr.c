/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:40:57 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/13 20:47:57 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sc;

	i = 0;
	sc = (unsigned char *)s;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
