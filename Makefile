NAME = libftprintf.a # This sets the name of the final static library that will be created, in this case, libftprintf.a.

LIBFT = libft # This defines the path to the libft directory, which is a \
                dependency for this project. It will be used to build the static library libft.a.


#   This variable defines the list of source files used to build the libftprintf.a library. \
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

OBJS = $(SOURCES:.c=.o) #   This is a pattern substitution. It replaces the .c extension with .o for \
                             each file in the SOURCES list, creating a list of object files (.o files). \
                             This will be the list of object files that will be compiled from the source files.
                             
all: $(NAME) # This is the default target, meaning when make is run without arguments, \
                it will try to build $(NAME), which is libftprintf.a. \
                This target depends on the $(NAME) target being built.

makelibft: # This is a target that builds libft.a

make -C $(LIBFT) bonus # This command runs make inside the libft directory (since LIBFT is set to libft). \
                                The -C flag tells make to change to the libft directory before executing. \
                                The bonus argument means that it builds the library with the bonus functions \
                                (extra functionality often required for projects).

    cp $(LIBFT)/libft.a . # This copies the libft.a static library from the libft directory into the current \
                            directory. This allows the libft.a file to be used in the linking step of building libftprintf.a.

    mv libft.a $(NAME) # This renames the libft.a file to libftprintf.a (or whatever is defined in $(NAME)), so it

$(NAME): $(OBJS) | makelibft # This is the rule for building the $(NAME) target (libftprintf.a). It depends on $(OBJS) \
                                (the object files) and the makelibft target. The | symbol indicates that makelibft is a \
                                "secondary" dependency — it must be built before $(NAME), but it doesn't affect \
                                the timestamp of $(NAME) itself.

    ar rcs $(NAME) $(OBJS) #   This command creates a static library (.a file). ar is the archive command used to \
                                create, modify, or extract from archives. The rcs flags: \
                                'r' : Insert the object files into the archive. \
                                'c' : Create the archive if it doesn't exist. \
                                's' : Create an index (symbol table) for the archive. This command creates \
                                      the final static library libftprintf.a using the object files ($(OBJS)).

clean: #This target cleans up temporary files (object files) that were created during \
        the build process. It also cleans the libft directory by calling make clean inside it.

    make -C $(LIBFT) clean # This command runs make clean inside the libft directory, which removes any \
                             object files and temporary files created by the libft build process.

    rm -f $(OBJS) # This removes the object files (.o files) that were created during the \
                    build process. The -f flag forces removal without asking for confirmation.

fclean: clean # This target calls clean and then removes the $(NAME) file (the final static library). \
                It is typically used when you want to clean everything, including the final library file.

    make -C $(LIBFT) fclean # This command runs make fclean inside the libft directory \
                              to remove any generated files, including libft.a.

    rm -f $(NAME) # This removes the final static library (libftprintf.a) after calling \
                    fclean. Again, the -f flag forces the removal without confirmation.

re: fclean all # This target first calls fclean (which cleans everything) and then calls all \
                (which rebuilds everything). This is used to completely rebuild the project from scratch.

.PHONY: all makelibft clean fclean re # This declares that all, makelibft, clean, fclean, and re are "phony" targets. \
                                        Phony targets are not actual files but are names for actions to be executed. \
                                        This ensures that make always runs these targets even if there are files with \
                                        the same name in the directory.
