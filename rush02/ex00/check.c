/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozhyhadl <ozhyhadl@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 17:56:09 by ozhyhadl          #+#    #+#             */
/*   Updated: 2018/09/23 23:11:09 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_arr(int row, int col)
{
	int x;
	int y;

	y = 0;
	while (y < col)
	{
		x = 0;
		while (x < row)
		{
			if (g_arr1[x][y] != g_arr2[x][y])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
