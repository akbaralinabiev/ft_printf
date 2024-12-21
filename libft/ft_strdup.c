/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:09:50 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/16 03:53:18 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
