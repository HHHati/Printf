# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 11:24:36 by bade-lee          #+#    #+#              #
#    Updated: 2021/12/01 11:17:15 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#          ----------========== {     VARS     } ==========----------

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I include -I Libft/include
LIBFT = Libft/libft.a

#          ----------========== {     SRCS     } ==========----------

SRC = \
ft_printf.c\
1_param_c.c\
2_param_s.c\
3_param_p.c\
4_param_d.c\
5_param_i.c\
6_param_u.c\
7_param_x.c\
8_param_X.c\
9_param_%.c\

#          ----------========== {     OBJS     } ==========----------

SRC_DIR = src/
OBJ_DIR = obj_printf/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

VPATH= $(shell find $(SRC_DIR) -type d)

#          ----------========== {    REGLES    } ==========----------

all: $(NAME)

$(LIBFT):
	@make -C Libft
	
$(OBJ_DIR)%.o: %.c
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	@printf "\e[1;32m.\e[0;m"

$(NAME): $(OBJ_DIR) $(LIBFT) $(OBJ)
	@printf "\n\e[1;32m[Libftprintf.a]\e[0;m\n"
	@ar -rc $(NAME) $(OBJ) $(LIBFT)
	@ranlib $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

exe: all
	@$(CC) $(FLAGS) $(INCLUDE) $(LIBFT) $(NAME) main.c
	@./a.out

clean:
	@rm -f $(OBJ)
	@make clean -C Libft

fclean: clean
	@rm -f $(NAME)
	@make fclean -C Libft

re: fclean all

.PHONY: all clean fclean re