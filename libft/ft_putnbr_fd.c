/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 08:31:37 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:13:06 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	arr[11];
	int		i;

	i = 10;
	arr[i--] = '\0';
	if (nb == 0)
		arr[i--] = '0';
	else if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		nb = -nb;
		write(fd, "-", 1);
	}
	while (nb > 0)
	{
		arr[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	write(fd, &arr[i + 1], 10 - i - 1);
}
