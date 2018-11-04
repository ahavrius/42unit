# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/26 23:18:20 by ahavrius          #+#    #+#              #
#    Updated: 2018/09/26 23:18:22 by ahavrius         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ
SRC = *.c
OUT = *.o
COMP = gcc -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME): 
		$(COMP) $(NAME) $(SRC)

clean:
	rm -f $(OUT)

fclean: clean

	rm -f $(NAME)
re: fclean all
