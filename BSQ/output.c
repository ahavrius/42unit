/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:51:28 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/26 22:51:30 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_free(void)
{
	int i;

	i = 0;
	while (i < g_row && g_arr[i] != NULL)
	{
		free(g_arr[i]);
		i++;
	}
	free(g_arr);
}

void	ft_write(void)
{
	int i;
	int j;

	i = -1;
	while (++i < g_row)
	{
		j = -1;
		while (++j < g_column)
			if (i - g_i < g_size && j - g_j < g_size &&
				i - g_i >= 0 && j - g_j >= 0)
				write(1, &g_full, 1);
			else
				write(1, &g_arr[i][j], 1);
		write(1, "\n", 1);
	}
}

int		ft_free_error(int k)
{
	int i;

	i = 0;
	if (k > -1)
	{
		while (i < k && g_arr[i] != NULL)
		{
			free(g_arr[i]);
			i++;
		}
		free(g_arr);
	}
	write(2, "map error\n", 10);
	return (-1);
}
