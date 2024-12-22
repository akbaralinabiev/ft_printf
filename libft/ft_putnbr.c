/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 04:14:35 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 04:20:28 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

int ft_putnbr(int nbr)
{
     int sum;
     
     sum = 0;
     if (nbr < 0)
     {
          write(1, "-", 1);
          nbr = -nbr;
     }

     if (nbr >= 10)
     {
          ft_putnbr(nbr / 10);
     }

     char digit = nbr % 10 + '0';
     write(1, &digit, 1);

     return (sum);
}
