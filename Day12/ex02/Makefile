#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/20 18:36:37 by ahavrius          #+#    #+#              #
#    Updated: 2018/09/20 19:25:49 by ahavrius         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAGS = -Wall -Wextra -Werror
NAME = ft_tail

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) ft_*.c

clean :
	/bin/rm -f ft_*.o

fclean: clean
	/bin/rm -f $(NAME)

re: clean all