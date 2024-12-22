/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:04:50 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:11:31 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

char	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sc;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (in_set(*s1, set))
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size > 0 && in_set(s1[size - 1], set))
		size--;
	sc = (char *)malloc(sizeof(char) * (size + 1));
	if (!sc)
		return (NULL);
	ft_strlcpy(sc, s1, size + 1);
	return (sc);
}
