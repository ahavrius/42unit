/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:36:02 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 10:30:39 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*start;
	unsigned int	i;

	i = 0;
	start = begin_list;
	while (i < nbr && start)
	{
		start = start->next;
		i++;
	}
	if (i != nbr)
		start = NULL;
	return (start);
}
