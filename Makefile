# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 11:24:36 by bade-lee          #+#    #+#              #
#    Updated: 2021/11/25 11:38:03 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#          ----------========== {     VARS     } ==========----------

NAME = libftprintf.a
LIB = Libft/libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

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

#          ----------========== {   SRCS LIB  } ==========----------

SRC += \
ft_strchr.c\

#          ----------========== {   INCLUDES   } ==========----------

INCLUDE = -I printf.h -I Libft/libft.h

#          ----------========== {    REGLES    } ==========----------

all: $(NAME)

lib:
	@make -C Libft

exe: all
	@./a.out
	
$(NAME): $(lib) $(OBJ)
	@gcc $(FLAGS) $(INCLUDE) $(HEADER) $(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 