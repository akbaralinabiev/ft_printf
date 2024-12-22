NAME = libftprintf.a
LIBFT = libft
SOURCES = printf/ft_printf.c \
          printf/ft_handle_c.c \
          printf/ft_handle_p.c \
          printf/ft_handle_percent.c \
          printf/ft_handle_str.c \
          printf/ft_handle_u.c \
          printf/ft_decimal_to_hex.c \
          printf/ft_dec_length.c \
          printf/ft_free_ptr.c \
          printf/ft_hex_length.c \
          printf/ft_reversed_str.c \
          printf/ft_handle_d.c \
          printf/ft_handle_x.c

OBJS = $(SOURCES:.c=.o)
all: $(NAME)

makelibft:
	make -C $(LIBFT) bonus
	cp $(LIBFT)/libft.a .
	mv libft.a $(NAME)

$(NAME): $(OBJS) | makelibft
	ar rcs $(NAME) $(OBJS)

clean:
	make -C $(LIBFT) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all makelibft clean fclean re