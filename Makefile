# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 11:24:36 by bade-lee          #+#    #+#              #
#    Updated: 2021/11/18 15:18:05 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = $(wildcard *.c, src/*.c)
OBJ = $(SRC:.c=.o)
LIB = Libft/libft.a
HEADER = printf.h Libft/libft.h
INCLUDE = -I ./
FLAGS = -Wall -Wextra 

all: $(NAME)

lib:
	@make -C Libft

exe: all
	@./a.out
	
$(NAME): $(OBJ)
	@gcc $(FLAGS) $(INCLUDE) $(HEADER) $(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 