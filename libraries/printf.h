/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 03:17:02 by akbarali          #+#    #+#             */
/*   Updated: 2024/12/22 06:18:56 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

// main function
int ft_printf(char const *str, ...);

// helper functions
int ft_handle_c(char c);
int ft_handle_p(unsigned long address);
int ft_handle_percent(void);
int ft_handle_str(char *str);
int ft_handle_u(unsigned int nbr);
char ft_decimal_to_hex(char digit, char type);
int ft_dec_length(long int nbr);
void ft_free_ptr(char **ptr);
int ft_hex_length(unsigned long nbr);
int ft_reversed_str(char *str);

#endif