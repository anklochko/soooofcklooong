NAME = libftprintf.a

CC = cc
CFLAGS = -Wextra -Wall -Werror

SRC = ft_printf.c ft_print_specifiers.c ft_print_specifiers2.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)  

fclean: clean
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re