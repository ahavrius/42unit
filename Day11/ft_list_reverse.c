/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:52:32 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/18 20:43:49 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_rec(t_list *prev)
{
	t_list	*cur;
	t_list	*next;

	cur->data = prev->data;
	if (prev->next != NULL)
	{
		next = ft_rec(prev->next);
		next->next = cur;
		cur->next = NULL;
	}
	return (cur);
}

void	ft_list_reverse(t_list **begin_list)
{
	if (*begin_list)
		*begin_list = ft_rec(*begin_list);
}
