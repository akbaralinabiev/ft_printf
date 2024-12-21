/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 04:44:30 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/21 23:33:26 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *str, ...)
{
	int		counter;
	va_list	args;

	counter = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			counter = counter + ft_putchar(str[0]);
		else
			ft_type(*++str, args, &counter);
		++str;
	}
	va_end (args);
	return (counter);
}
