/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 13:55:53 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 14:39:55 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

void	ft_change(t_list *first, t_list *second)
{
	void	*data;

	data = first->data;
	first->data = second->data;
	second->data = data;
}

void	ft_sort_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*start;

	ft_list_push_front(begin_list, data);
	start = *begin_list;
	while (start->next)
	{
		if (cmp(start->data, start->next->data) > 0)
			ft_change(start, start->next);
		start = start->next;
	}
}
