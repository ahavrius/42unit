/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 18:03:09 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 10:53:10 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
					void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*start;

	start = begin_list;
	while (start)
	{
		if (cmp(start->data, data_ref) == 0)
			f(start->data);
		start = start->next;
	}
}
