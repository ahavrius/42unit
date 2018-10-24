/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 13:07:13 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 14:34:30 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*new;
	int		i;

	new = begin_list;
	i = 0;
	while (new)
	{
		new = new->next;
		i++;
	}
	return (i);
}

void	ft_change(t_list *first, t_list *second)
{
	void	*data;

	data = first->data;
	first->data = second->data;
	second->data = data;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*start;
	int		len;
	int		i;

	len = ft_list_size(*begin_list);
	i = 0;
	while (i < len)
	{
		start = *begin_list;
		while (start->next)
		{
			if (cmp(start->data, start->next->data) > 0)
				ft_change(start, start->next);
			start = start->next;
		}
		i++;
	}
}
