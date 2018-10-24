/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:30:22 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/18 20:49:05 by ahavrius         ###   ########.fr       */
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
