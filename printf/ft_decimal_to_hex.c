/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 04:32:22 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 06:19:17 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"

char	ft_decimal_to_hex(char digit, char type)
{
	int	cap;

	cap = 0;
	if (type == 'x')
		digit = 32;
	if (digit >= 10 && digit <= 15 )
	{
		if (digit == 10)
			return ('a' - cap);
		if (digit == 11)
			return ('b' - cap);
		if (digit == 12)
			return ('c' - cap);
		if (digit == 13)
			return ('d' - cap);
		if (digit == 14)
			return ('e' - cap);
		if (digit == 15)
			return ('f' - cap);
	}
	else
		return (digit + '0');
	return (0);
}
