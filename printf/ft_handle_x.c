/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 04:22:31 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 07:26:35 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"

int	ft_handle_x(unsigned int nbr, char type)
{
	char	*num;
	int		bytes;
	int		i;

	i = 0;
	if (!nbr)
		return (write(1, "0", sizeof(char) * 1));
	num = (char *)malloc((ft_hex_length(nbr) + 1) * sizeof(char));
	while (nbr)
	{
		num[i] = '\0';
		nbr = nbr / 16;
		i++;
	}
	num[i] = '\0';
	bytes = ft_reversed_str(num);
	ft_free_ptr(&num);
	return (bytes);
}
