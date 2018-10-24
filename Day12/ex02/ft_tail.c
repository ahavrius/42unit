/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:13:35 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/20 20:18:30 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int		size_file(char *av)
{
	int		file;
	int		size;
	char	c;

	size = 0;
	file = open(av, O_RDONLY);
	while (read(file, &c, 1))
		size++;
	close(file);
	return (size);
}

void	ft_error(char *c)
{
	write(2, "ft_tail: ", 9);
	ft_putstr(c, 2);
	write(2, ": No such file or directory\n", 28);
}

void	ft_names(char *c, int len, int i)
{
	if (len > 4)
	{
		if (i > 3)
			write(1, "\n==> ", 5);
		else
			write(1, "==> ", 4);
		ft_putstr(c, 1);
		write(1, " <==\n", 5);
	}
}

void	ft_print(char **av, int i, int file, int len)
{
	char	c;
	int		size;
	int		read_;
	int		amount;

	size = size_file(av[i]);
	read_ = 0;
	amount = ft_atoi(av[2]);
	printf("%d\n", amount);
	ft_names(av[i], i, len);
	if (av[2][0] == '+')
	{
		while (read_ != amount - 1)
			read_ += read(file, &c, 1);
		while (read(file, &c, 1))
			write(1, &c, 1);
	}
	else
	{
		while (read_ < (size - amount))
			read_ += read(file, &c, 1);
		while (read(file, &c, 1))
			write(1, &c, 1);
	}
}

int		main(int len, char **av)
{
	int file;
	int i;

	i = 3;
	if (len < 4)
		return (0);
	while (i < len)
	{
		file = open(av[i], O_RDONLY);
		if (file == -1)
			ft_error(av[i]);
		else
			ft_print(av, i, file, len);
		close(file);
		i++;
	}
	return (0);
}
