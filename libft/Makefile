# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 10:47:22 by pkieszek          #+#    #+#              #
#    Updated: 2025/01/24 15:15:36 by anklochk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}
	@echo "Library ${NAME} created successfully"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@${RM} ${OBJS}
	@echo "All objects cleaned successfully"

fclean: clean
	@${RM} ${NAME}
	@echo "All objects and library ${NAME} cleaned successfully"

re: fclean all

.PHONY: all clean fclean re
