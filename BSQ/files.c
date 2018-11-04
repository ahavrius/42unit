/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:50:09 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/26 22:50:10 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_read_nb(void)
{
	int i;

	i = -1;
	while (++i < g_column - 3 && g_input[i] >= '0' && g_input[i] <= '9')
		g_row = g_row * 10 + g_input[i] - '0';
	if (i != g_column - 3)
		return (-1 * write(2, "map error\n", 10));
	return (1);
}

int	ft_read_fl(int where)
{
	char c;

	g_row = 0;
	g_column = 0;
	g_input = (char*)malloc(1);
	while (read(where, &c, 1) && c != '\n')
	{
		g_input[g_column] = (char)malloc(1);
		g_input[g_column] = c;
		g_column++;
	}
	if (g_column < 4)
		return (-1 * write(2, "map error\n", 10));
	g_empty = g_input[g_column - 3];
	g_occup = g_input[g_column - 2];
	g_full = g_input[g_column - 1];
	if (g_empty == g_occup || g_empty == g_full || g_occup == g_full)
		return (-1 * write(2, "map error\n", 10));
	return (ft_read_nb());
}

int	ft_read_file(char *str)
{
	int	file;

	file = open(str, O_RDONLY);
	if (file == -1)
		return (-1 * write(2, "file wasn't found\n", 18));
	if (ft_read_fl(file) < 0)
		return (-1);
	free(g_input);
	if (ft_read_array(file) < 0)
		return (-1 + close(file));
	close(file);
	return (1);
}

int	ft_read_input(void)
{
	if (ft_read_fl(0) < 0)
		return (-1);
	free(g_input);
	return (ft_read_array(0));
}
