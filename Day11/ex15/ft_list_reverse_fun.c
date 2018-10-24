/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 13:16:09 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 14:39:20 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*g_new_head;

t_list	*ft_rec(t_list *prev)
{
	t_list	*cur;
	t_list	*next;

	cur = prev;
	if (prev->next != NULL)
	{
		next = ft_rec(prev->next);
		next->next = cur;
		cur->next = prev;
	}
	else
		g_new_head = prev;
	return (cur);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	if (begin_list)
	{
		ft_rec(begin_list);
		begin_list->next = NULL;
	}
	else
		g_new_head = NULL;
	begin_list = g_new_head;
}
