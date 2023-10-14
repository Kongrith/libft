NAME = libft
SRCS = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c

OBJS = $(SRCS:.c=.o)
CXX = gcc
STDFLAG = -std=c99
WARN = -Wall -Werror -Wextra
CCFLAGS = $(WARN)

all: $(NAME)
	echo "01"

$(NAME): $(OBJS)
	ar rcs $(NAME).a $(OBJS)
	echo "02"

%.o: %.c
	$(CXX) $(CCFLAGS) -Isrc/ -c $< -o $@
	echo "03"

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
