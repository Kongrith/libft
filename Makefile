#include en.mk
NAME = libft
CC = gcc

# The CFLAGS variable sets compile flags for gcc:
#  -g        compile with debug information
#  -Wall     give verbose compiler warnings
#  -O0       do not optimize generated code
#  -std=c99  use the C99 standard language definition
CFLAGS = -Wall -Wextra -Werror

# In this section, you list the files that are part of the project.
# If you add/change names of source files, here is where you
# edit the Makefile.
SOURCES = srcs/ft_test.c \
		#   srcs/core/ft_get_value.c \
		#   srcs/core/ft_put_value.c \
		#   srcs/core/ft_parse_entry.c \
		#   srcs/core/ft_free_entry.c \
		#   srcs/core/ft_parse_number.c \
		#   srcs/fileio/ft_read_line.c \
		  $(LOCALE_SOURCES)
INCLUDE_DIR = includes/
# LIBS = libs/libft.a
# DEFAULT_DICT = ./numbers.en.dict

# .PHONY: all re fclean clean libs

# all: libs $(NAME)

# In this section, you list the files that are part of the project.
# If you add/change names of source files, here is where you
# edit the Makefile.
$(NAME): $(SOURCES) $(LIBS)
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -o $@ $^

# libs:
# 	for lib in $(LIBS); do $(MAKE); done

# $(SOURCES) $(LIBS):

# re: fclean all

# fclean: clean
# 	for lib in $(LIBS); do $(MAKE) -C $$(dirname $$lib) fclean; done
# 	rm -f $(NAME)

# clean:
# 	for lib in $(LIBS); do $(MAKE) -C $$(dirname $$lib) clean; done
