# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 11:24:36 by bade-lee          #+#    #+#              #
#    Updated: 2021/11/29 10:25:00 by bade-lee         ###   ########.fr        #
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
param1c.c\
param2s.c\
param3p.c\
param4d.c\
param5i.c\
param6u.c\
param7x.c\
param8x.c\
param9prc.c\

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

$(NAME): $(OBJ_DIR) $(LIBFT) title $(OBJ)
	@ar -rc $(NAME) $(OBJ) $(LIBFT)
	@ranlib $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

title:
	@printf "\n\e[1;32mPrintf       :\e[0;m"

lclean: 
	@make clean -C Libft

lfclean: 
	@make fclean -C Libft

clean:
	@rm -f $(OBJ)
	@printf "\e[0;31mDELETED : *.o from Printf\e[0;m\n"

fclean: clean lfclean
	@rm -f $(NAME)
	@printf "\e[0;31mDELETED : libftprintf.a from Printf\e[0;m\n"

re: fclean all

.PHONY: all clean lclean lfclean fclean re 