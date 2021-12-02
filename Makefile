# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 11:24:36 by bade-lee          #+#    #+#              #
#    Updated: 2021/12/02 10:57:43 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#          ----------========== {     VARS     } ==========----------

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I include

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

#          ----------========== {     SRCS     } ==========----------

SRC += \
	ft_itoa.c\
	ft_putchar_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_strchr.c\
	ft_strlen.c\

#          ----------========== {     OBJS     } ==========----------

SRC_DIR = src/
OBJ_DIR = obj_printf/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

VPATH= $(shell find $(SRC_DIR) -type d)

#          ----------========== {    REGLES    } ==========----------

all: $(NAME)

$(OBJ_DIR)%.o: %.c
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	@printf "\e[1;32m.\e[0;m"

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@printf "\n\e[1;32m[Libftprintf.a]\e[0;m\n"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -f $(OBJ)
	@printf "\e[31m[*.o files deleted]\e[0;m\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\e[31m[Libftprintf.a deleted]\e[0;m\n"

re: fclean all

.PHONY: all clean fclean re