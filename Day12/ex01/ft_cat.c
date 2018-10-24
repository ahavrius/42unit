/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:06:42 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/20 18:48:13 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

void	ft_input(void)
{
	char c;

	while (read(0, &c, 1) != 0)
		write(1, &c, 1);
}

void	ft_file(int file)
{
	char c;

	while (read(file, &c, 1))
		write(1, &c, 1);
	close(file);
}

void	ft_par_error(char *c)
{
	write(2, "ft_cat: ", 8);
	ft_putstr(c, 2);
	write(2, ": No such file or directory\n", 28);
}

int		main(int len, char **str)
{
	int i;
	int file;

	i = 1;
	if (len == 1)
		ft_input();
	else
		while (i < len)
		{
			file = open(str[i], O_RDONLY);
			if (file == -1)
				ft_par_error(str[i]);
			else
				ft_file(file);
			i++;
		}
	return (0);
}
