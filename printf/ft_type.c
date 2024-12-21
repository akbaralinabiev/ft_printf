/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabiev <anabiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 23:34:09 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/21 23:43:04 by anabiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_type(const char c, va_list value, int *counter)
{
	if(c == 'c')
	{
		++(*counter);
		ft_putchar(va_arg(value, int));
	}
	else if (c == 's')
		ft_putstr(va_arg(value, char *), counter);
	else if (c == 'i' || c == 'd')
		ft_printid(va_arg(value, int), counter);
	else if (c == 'p')
		ft_printp(va_arg(value, unsigned long long), counter);
	else if (c == 'u')
		ft_printu(va_arg(value, unsigned int), counter);
	else if (c =='x' || c == 'X')
		ft_printhex(va_arg(value, unsigned int), c, counter);
	else if (c != 0)
	{
		++(*counter);
		ft_putchar(c);
	}
}