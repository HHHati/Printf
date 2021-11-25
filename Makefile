# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 11:24:36 by bade-lee          #+#    #+#              #
#    Updated: 2021/11/25 14:53:45 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#          ----------========== {     VARS     } ==========----------

NAME = libftprintf.a
LIB = Libft/libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I include

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

OBJ = $(SRC:.c=.o)

#          ----------========== {   SRCS LIB   } ==========----------

SRC += \
ft_strchr.c\

#          ----------========== {     OBJS     } ==========----------

SRC_DIR = src/
OBJ_DIR = obj_printf/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

VPATH= $(shell find $(SRC_DIR) -type d)

#          ----------========== {    REGLES    } ==========----------

all: $(NAME)

lib:
	@make -C Libft
	
$(OBJ_DIR)%.o: %.c
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

$(NAME): lib $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	@printf "\e[0;31mDELETED : *.o from Printf\e[0;m\n"

lclean: 
	@make clean -C Libft

lfclean: 
	@make fclean -C Libft

fclean: clean lfclean
	@rm -f $(NAME)
	@printf "\e[0;31mDELETED : libftprintf.a from Printf\e[0;m\n"

re: fclean all

.PHONY: all clean fclean re 