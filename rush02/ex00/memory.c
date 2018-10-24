/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 17:29:11 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 22:08:36 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_new(int row, int col)
{
	char	**c;
	int		i;

	i = 0;
	c = (char **)malloc(sizeof(char *) * row);
	while (i < row)
	{
		c[i] = malloc(sizeof(char) * col);
		i++;
	}
	return (c);
}

void	ft_free(char **c, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(c[i]);
		i++;
	}
}
