#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 18:41:07 by ahavrius          #+#    #+#              #
#    Updated: 2018/09/18 09:46:52 by ahavrius         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAGS = -Wall -Wextra -Werror
NAME = do-op

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) main.c ft_*.c

clean :
	rm -f ft_*.o
	rm -f $(NAME)

re: clean all