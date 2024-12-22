# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 06:35:12 by akbarali          #+#    #+#              #
#    Updated: 2024/12/22 06:35:13 by akbarali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c \
	ft_handle_c \
	ft_handle_p.c \
	ft_handle_percent.c \
	ft_handle_str.c \
	ft_handle_u.c \
	ft_decimal_to_hex.c \
	ft_dec_length.c \
	ft_free_ptr.c \
	ft_hex_length.c \
	

OBJ = $(SOURCES:.c=.o)

LIBFTPRINTF_A = libftprintf.a

$(LIBFTPRINTF_A): $(OBJ)
	ar rcs $(LIBFTPRINTF_A) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBFTPRINTF_A)

re: fclean $(LIBFTPRINTF_A)
