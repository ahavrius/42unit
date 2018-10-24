/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:51:25 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/18 09:54:38 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_oper(char **argv, int x, int y)
{
	if (argv[2][1] != '\0')
		return (0);
	if (argv[2][0] == '+')
		return (x + y);
	if (argv[2][0] == '-')
		return (x - y);
	if (argv[2][0] == '/')
		return (x / y);
	if (argv[2][0] == '%')
		return (x % y);
	if (argv[2][0] == '*')
		return (x * y);
	return (0);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	if (argc != 4)
		return (0);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	if (y == 0 && argv[2][0] == '/' && argv[2][1] == '\0')
		ft_putstr("Stop : division by zero");
	else if (y == 0 && argv[2][0] == '%' && argv[2][1] == '\0')
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(ft_oper(argv, x, y));
	ft_putchar('\n');
	return (0);
}
