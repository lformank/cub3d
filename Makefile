# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lformank <lformank@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/14 11:34:15 by lformank          #+#    #+#              #
#    Updated: 2025/09/14 17:10:28 by lformank         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -I. -I$(LIB_DIR) -Imlx_linux
MLXFLAGS = -L$(LIB_DIR) -lft -L$(MLX_DIR) -lmlx -lXext -lX11 -lm
RM = rm -rf
SUB_DIR = src
OBJ_DIR = obj
LIB_DIR = libft
MLX_DIR = minilibx-linux

SUBJS = parse_map.c main.c errors.c

SUBJS := $(addprefix $(SUB_DIR)/,$(SUBJS))
OBJS = $(SUBJS: $(SUB_DIR)/%.c=$(OBJ_DIR)/%.o)

all: minilib libft cub3d

minilibx-linux: 
	git clone https://github.com/42paris/minilibx-linux.git minilibx-linux

minilib: minilibx-linux
	$(MAKE) -C minilibx-linux

LIBFT = $(LIB_DIR)/libft.a

$(LIBFT):
	$(MAKE) -C $(LIB_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SUB_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ_DIR) $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLXFLAGS) $(INCLUDES)

clean: 
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C minilibx-linux clean
	$(RM) $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean
	$(MAKE) -C minilibx-linux clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re