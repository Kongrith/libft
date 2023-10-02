NAME = libft.a

CC = gcc

SRCS = ft_isalpha.c /
		ft_isdigit.c 
say_hello:
	@echo "Hello World"

clean:
	rm -rf $(OBJS)
