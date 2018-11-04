/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:50:59 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/26 22:51:00 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_local_review(int *len, char *str, int j, int len_new)
{
	if (len_new == 0)
	{
		*len = 0;
		return (0);
	}
	if (str[j - 1] == '\n')
	{
		*len = j - 1;
		str[j - 1] = '\0';
		return (0);
	}
	*len = j;
	return (1);
}

int	ft_get_buff(int where, int *len, char **res)
{
	int		len_new;
	int		j;
	char	*str;

	str = (char*)malloc(g_buff);
	len_new = 1;
	j = 0;
	str[j] = '\0';
	while (j < g_buff && len_new && (j == 0 || str[j - 1] != '\n'))
	{
		len_new = read(where, &str[j], 1);
		if (len_new == 0)
			str[j] = '\0';
		j++;
	}
	*res = str;
	return (ft_local_review(len, str, j, len_new));
}

int	ft_get_line(int where)
{
	int		size;
	char	*str;
	int		len;

	size = 0;
	while (ft_get_buff(where, &len, &str))
	{
		ft_list_push_front(str);
		size++;
	}
	if (len > 0)
		ft_list_push_front(str);
	g_column = size * g_buff + len;
	if (g_column < 1)
		return (ft_free_error(-1));
	return (ft_list_clear(size));
}

int	ft_local_check(char x, int y, int where)
{
	int z;

	z = -1;
	while (++z < g_column && read(where, &x, 1))
		if (x == g_empty || x == g_occup)
			g_arr[y][z] = x;
		else
			return (ft_free_error(y));
	if (z < g_column)
		return (ft_free_error(y));
	g_arr[y][g_column - 1] = '\0';
	if (read(where, &x, 1) == 0 || x != '\n')
		return (ft_free_error(y));
	return (1);
}

int	ft_read_array(int where)
{
	int		i;
	char	c;

	i = 1;
	c = '\n';
	g_arr = (char**)malloc(sizeof(char*) * g_row);
	if (ft_get_line(where) < 0)
		return (-1);
	while (i < g_row)
	{
		g_arr[i] = (char*)malloc(g_column + 1);
		if (ft_local_check(c, i, where) < 0)
			return (-1);
		i++;
	}
	if (read(where, &c, 1) != 0)
		return (ft_free_error(i));
	return (1);
}
