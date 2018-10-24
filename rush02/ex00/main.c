/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:30:17 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 23:21:37 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_if(int *col, int j)
{
	if (*col == 0)
		*col = j;
	else if (j > *col)
		*col = -1;
}

char	*ft_input(int *row, int *col)
{
	int		j;
	char	c;
	int		k;
	char	*res;

	k = 0;
	j = 0;
	res = (char*)malloc(sizeof(char));
	while (read(0, &c, 1) && *col != -1)
	{
		res[k] = (char)malloc(sizeof(char));
		res[k] = c;
		k++;
		if (c == '\n')
		{
			ft_if(col, j);
			j = 0;
			*row = *row + 1;
		}
		else
			j++;
	}
	return (res);
}

void	ft_inarray(char *c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (c[k])
	{
		if (c[k] == '\n')
		{
			i++;
			j = 0;
		}
		else
		{
			g_arr1[i][j] = c[k];
			j++;
		}
		k++;
	}
}

void	ft_check(int row, int col)
{
	int flag;
	int	i;

	i = 0;
	flag = 1;
	while (i < 5)
	{
		g_rush[i](col, row);
		if (check_arr(row, col))
		{
			if (!flag)
				write(1, " || ", 4);
			write(1, g_write[i], 12);
			ft_putnbr(col);
			write(1, "] [", 3);
			ft_putnbr(row);
			write(1, "]", 1);
			flag = 0;
		}
		i++;
	}
	if (flag == 1)
		write(1, "aucune", 6);
}

int		main(void)
{
	char	*c;
	int		row;
	int		col;

	row = 0;
	col = 0;
	c = ft_input(&row, &col);
	if (col == -1)
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	init();
	g_arr1 = ft_new(row, col);
	g_arr2 = ft_new(row, col);
	ft_inarray(c);
	ft_check(row, col);
	write(1, "\n", 1);
	return (0);
}
