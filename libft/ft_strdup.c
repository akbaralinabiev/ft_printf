/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:09:50 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:12:44 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;
	int		len;

	len = ft_strlen((char *)s);
	d = (char *)malloc((len + 1) * sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
