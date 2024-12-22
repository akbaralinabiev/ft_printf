/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 21:13:05 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:12:36 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1_len;
	size_t	str2_len;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	str1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	result = (char *)ft_calloc(str1_len + str2_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)s1, str1_len +1);
	ft_strlcat(result, (char *)s2, str2_len + str1_len + 1);
	return (result);
}
