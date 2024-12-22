/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 04:03:24 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 07:27:28 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"
#include "../libraries/libft.h"

int	ft_handle_str(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", sizeof(char) * 6));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
