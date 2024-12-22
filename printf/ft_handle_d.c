/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 04:12:57 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 06:19:31 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"
#include "../libraries/libft.h"

int	handle_d(int c)
{
	ft_putnbr(c);
	return (ft_dec_length(c));
}
