#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 12:57:18 by ahavrius          #+#    #+#              #
#    Updated: 2018/09/18 21:02:10 by ahavrius         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAGS = -Wall -Wextra -Werror
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OPT = -I ./includes/
BIN = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
LIB = libft.a

all: $(LIB)

$(LIB):
	gcc $(FLAGS) -c $(OPT) $(SRC)
	ar rc $(LIB) $(BIN)
	ranlin $(LIB)

clean :
	rm -f $(BIN)

fclean: clean
	rm -f $(LIB)

re: fclean all