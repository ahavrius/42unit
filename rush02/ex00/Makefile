#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozhyhadl <ozhyhadl@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/23 02:59:06 by ozhyhadl          #+#    #+#              #
#    Updated: 2018/09/23 03:12:42 by ozhyhadl         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = colle-2
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