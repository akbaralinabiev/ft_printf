/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 06:03:21 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 06:20:21 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"

int	ft_hex_length(unsigned long nbr)
{
	int	len;

	len = 0;
	while (nbr > 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}
