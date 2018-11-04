/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:55:29 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 16:33:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int			ft_size(t_list *list)
{
	t_list	*start;
	int		i;

	i = 0;
	start = list;
	while (start)
	{
		i++;
		start = start->next;
	}
	return (i);
}

void		ft_swap(t_list *t1, t_list *t2)
{
	int i;

	i = t1->data;
	t1->data = t2->data;
	t2->data = i;
}

t_list		*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		len;
	int		i;
	t_list	*start;

	if (!lst)
		return (lst);
	len = ft_size(lst);
	i = 0;
	while (i < len)
	{
		start = lst;
		while (start->next)
		{
			if (!cmp(start->data, start->next->data))
				ft_swap(start, start->next);
			start = start->next;
		}
		i++;
	}
	return (lst);
}
