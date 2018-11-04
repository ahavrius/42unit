/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:50:40 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/26 22:50:41 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_create_elem(char *data)
{
	t_list *var;

	if (!(var = malloc(sizeof(t_list))))
		return (NULL);
	var->data = data;
	var->next = NULL;
	return (var);
}

void	ft_list_push_front(char *data)
{
	t_list *var;

	if (g_begin_list)
	{
		var = ft_create_elem(data);
		var->next = g_begin_list;
		g_begin_list = var;
	}
	else
		g_begin_list = ft_create_elem(data);
}

void	ft_clear_element(void)
{
	t_list *tofree;

	tofree = g_begin_list;
	g_begin_list = g_begin_list->next;
	free(tofree);
}

int		ft_list_clear(int size)
{
	int		k;
	int		j;

	g_arr[0] = (char*)malloc(g_column + 1);
	if (size != 0 && g_column % size == 0)
		size--;
	k = size;
	if (!g_begin_list)
		return (-1);
	while (g_begin_list != 0)
	{
		j = -1;
		while (++j < g_buff && g_begin_list->data[j])
			if (g_begin_list->data[j] == g_empty ||
					g_begin_list->data[j] == g_occup)
				g_arr[0][k * g_buff + j] = g_begin_list->data[j];
			else
				return (ft_free_error(-1));
		ft_clear_element();
		k--;
	}
	g_arr[0][g_column] = '\0';
	g_begin_list = NULL;
	return (1);
}
