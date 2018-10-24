/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:16:27 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 14:27:25 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*start;

	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		start = *begin_list1;
		while (start->next)
			start = start->next;
		start->next = begin_list2;
	}
}

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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
