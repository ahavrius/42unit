/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:51:08 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/26 22:51:10 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_validation(int *x, int *y, int size_cur)
{
	if (g_size < size_cur)
	{
		g_size = size_cur;
		g_i = *x;
		g_j = *y;
	}
}

void	ft_check_cube(int *i, int *j)
{
	int flag;
	int k;
	int size_cur;

	flag = 1;
	size_cur = 0;
	while (flag && size_cur + *i < g_row && size_cur + *j < g_column)
	{
		k = -1;
		while (++k <= size_cur && flag && *i + k < g_row && *j + k < g_column)
			if (g_arr[*i + size_cur][*j + k] == g_occup ||
					g_arr[*i + k][*j + size_cur] == g_occup)
				flag = 0;
		if (flag)
			size_cur++;
	}
	ft_validation(i, j, size_cur);
	if (flag || (*j >= g_column - g_size - 1))
	{
		(*i)++;
		*j = 0;
	}
	else
		*j += k;
}

void	ft_check_array(void)
{
	int i;
	int j;

	i = -1;
	g_size = 0;
	while (++i < g_row - g_size)
	{
		j = 0;
		while (j < g_column - g_size && i < g_row - g_size)
			if (g_arr[i][j] == g_empty)
				ft_check_cube(&i, &j);
			else
				j++;
	}
}
