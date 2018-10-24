/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:41:35 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/18 10:46:53 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*new_;

	new_ = malloc(sizeof(t_list));
	new_->data = data;
	new_->next = NULL;
	return (new_);
}
