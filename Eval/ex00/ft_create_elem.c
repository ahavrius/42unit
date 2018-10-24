/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:41:35 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 12:46:04 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(int data)
{
	t_list	*new_;

	new_ = malloc(sizeof(t_list));
	new_->data = data;
	new_->next = NULL;
	return (new_);
}
