/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:15:22 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:14:35 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

static size_t	get_len(int n)
{
	size_t	len;

	if (n < 0)
		len = 1;
	else if (n == 0)
		return (1);
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	cnv(int n, char *str, size_t len)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len-- && str[len] != '-')
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	if (n == INT_MIN)
	{
		str = ft_calloc(12, sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	len = get_len(n);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	else if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	cnv(n, str, len);
	return (str);
}
