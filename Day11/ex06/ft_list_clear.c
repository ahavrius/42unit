/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:28:20 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/19 10:21:32 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*old;
	t_list	*young;

	old = *begin_list;
	while (old)
	{
		young = old->next;
		free(old);
		old = young;
	}
	*begin_list = NULL;
}
