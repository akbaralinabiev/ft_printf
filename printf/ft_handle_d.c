/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 04:12:57 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 07:45:21 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"
#include "../libraries/libft.h"

static void ft_putnbr(int nbr)
{
	int	sum;

	sum = 0;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
		if (nbr == -2147483648)
		{
			nbr--;
			sum = 1;
		}
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + 48 + sum, 1);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10 + sum);
	}
}

int	ft_handle_d(int c)
{
	ft_putnbr(c);
	return (ft_dec_length(c));
}
