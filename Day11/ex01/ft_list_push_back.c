/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:50:01 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 10:08:02 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *old;

	new = ft_create_elem(data);
	old = *begin_list;
	if (old)
	{
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = new;
	}
	else
		old = new;
}
