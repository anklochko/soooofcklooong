# NAME = so_long

# CC = cc
# CFLAGS = -Wall -Wextra -Werror

# SRC     = main.c src/*.c
# OBJS = $(SRC:.c=.o)

# MLX_DIR = mlx
# MLX_LIB = $(MLX_DIR)/libmlx.a

# #Its Linux or Mac?
# UNAME_S := $(shell uname -s)

# #	Makefile 
# # 			- `MLX_FLAGS` tells the compiler how to use MiniLibX
# INCLUDES = -I$(MLX_DIR)

# ifeq ($(UNAME_S),Linux)
# 	MLX_FLAGS = -L$(MLX_DIR) -lmlx -lXext -lX11
# else
# 	MLX_FLAGS = -L$(MLX_DIR) -lmlx -framework OpenGL -framework AppKit
# endif

# #	Firs build mlx
# #			- `@` hides the command from the output.  
# #			- `-C $(MLX_DIR)` means "go into the `mlx` folder and run make there"

# all: $(MLX_LIB) $(NAME)

# $(MLX_LIB):
# 	@$(MAKE) -C $(MLX_DIR)

# $(NAME): $(MLX_LIB) $(OBJS) 
# 	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX_FLAGS)

# #$(NAME): $(MLX_LIB) $(OBJS)
# #    $(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX_FLAGS)

# #	This tells how to turn a `.c` file into a `.o` file. 
# %.o: %.c
# 	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# #	Delete all .o files also with mlx
# clean:
# 	rm -f $(OBJS)
# 	@$(MAKE) -C $(MLX_DIR) clean

# #	Delete all .o files also with program file
# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

NAME    = so_long
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRC     = main.c src/*.c
OBJS    = $(SRC:.c=.o)

MLX_DIR = mlx
MLX_LIB = $(MLX_DIR)/libmlx.a

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(MLX_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(MLX_LIB) \
	    -framework OpenGL -framework AppKit -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

clean:
	rm -f $(OBJS)
	@$(MAKE) -C $(MLX_DIR) clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
