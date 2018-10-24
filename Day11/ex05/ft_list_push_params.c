/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:16:24 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 15:29:10 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*new;
	t_list	*after;

	i = 1;
	new = NULL;
	while (i < ac)
	{
		after = new;
		new = ft_create_elem(av[i]);
		new->next = after;
		i++;
	}
	return (new);
}
