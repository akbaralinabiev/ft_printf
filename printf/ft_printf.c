/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 04:44:30 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 07:28:42 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/printf.h"

static int	ft_check_args(va_list arg, char c)
{
	int	bytes;

	bytes = 0;
	if (c == '%')
		bytes = bytes + ft_handle_percent();
	if (c == 'c')
		bytes = bytes + ft_handle_c(va_arg(arg, int));
	if (c == 's')
		bytes = bytes + ft_handle_str(va_arg(arg, char *));
	if (c == 'p')
		bytes = bytes + ft_handle_p(va_arg(arg, unsigned long));
	if (c == 'd' || c == 'i')
		bytes = bytes + ft_handle_d(va_arg(arg, int));
	if (c == 'u')
		bytes = bytes + ft_handle_u(va_arg(arg, int));
	if (c == 'x')
		bytes = bytes + ft_handle_x(va_arg(arg, unsigned int), c);
	return (bytes);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		bytes;
	char		c;

	i = 0;
	bytes = 0;
	va_start(arg, str);
	while (str[i])
	{
		c = str[i + 1];
		if (str[i] == '%')
		{
			bytes = bytes + ft_check_args(arg, c);
			i++;
		}
		else
			bytes = bytes + write(1, &str[i], sizeof(char));
		i++;
	}
	va_end(arg);
	return (bytes);
}
