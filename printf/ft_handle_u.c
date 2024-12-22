/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 04:06:11 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 07:09:01 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"
#include "../libraries/libft.h"

static void	ft_put_u_nbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', 1);
	else
	{
		ft_put_u_nbr(nbr / 10);
		ft_put_u_nbr(nbr % 10);
	}
}

int ft_handle_u(unsigned int nbr)
{
	ft_put_u_nbr(nbr);
	return (ft_dec_length(nbr));
}
