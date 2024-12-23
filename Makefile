# This sets the name of the final static library that will be created, in this case, libftprintf.a.
NAME = libftprintf.a


# This defines the path to the libft directory, which is a dependency for this project. It will be used to build the static library libft.a.
LIBFT = libft


### This variable defines the list of source files used to build the libftprintf.a library. \
     These are C files located in the printf directory. Each file is separated by a backslash \
     for readability. The listed files contain the implementation of different functions used \
     by the library, such as ft_printf, handling different formats like characters, \
     strings, unsigned integers, etc.
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


### This is a pattern substitution. It replaces the .c extension with .o for \
     each file in the SOURCES list, creating a list of object files (.o files). \
     This will be the list of object files that will be compiled from the source files.
OBJS = $(SOURCES:.c=.o)

### This is the default target, meaning when make is run without arguments, \
     it will try to build $(NAME), which is libftprintf.a. \
     This target depends on the $(NAME) target being built.
all: $(NAME)


makelibft: # This is a target that builds libft.a

### This command runs make inside the libft directory (since LIBFT is set to libft). \
     The -C flag tells make to change to the libft directory before executing. \
     The bonus argument means that it builds the library with the bonus functions \
     (extra functionality often required for projects).
	make -C $(LIBFT) bonus

### 
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