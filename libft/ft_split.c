/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:20:03 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:12:53 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

static int	count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || !s[i + 1]) && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**separate(char const *s, char c, size_t no_words)
{
	char	**arr;
	char	*start;
	size_t	i;

	arr = (char **)ft_calloc(no_words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < no_words)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		s = ft_strchr(s, c);
		arr[i] = ft_substr(start, 0, s - start);
		if (!arr[i])
		{
			while (i--)
				free(arr[i]);
			return (NULL);
		}
		i++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	no_words;

	if (!s)
	{
		return (NULL);
	}
	no_words = count(s, c);
	arr = separate(s, c, no_words);
	return (arr);
}
