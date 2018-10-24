/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:24:26 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 12:00:12 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_remove(t_list *prev, t_list *current, t_list *after)
{
	prev->next = after;
	free(current);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*start;
	t_list	*cur;
	t_list	*after;

	start = *begin_list;
	while (start && start->next)
	{
		cur = start->next;
		if (cmp(cur->data, data_ref) == 0)
		{
			ft_remove(start, cur, cur->next);
		}
		else
			start = start->next;
	}
	start = *begin_list;
	if (start && cmp(start, data_ref) == 0)
	{
		cur = start->next;
		free(start);
		*begin_list = cur;
	}
}
