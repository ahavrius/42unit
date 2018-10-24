/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:37:28 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/21 22:00:17 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

int		(*g_cmpf)(void *, void *);

void	*ft_rec(t_btree *root, void *data)
{
	if (g_cmpf(root->item, data) == 0)
		return (root->item);
	if (g_cmpf(root->item, data) > 0)
	{
		if (root->left)
			return (ft_rec(root->left, data));
		return (NULL);
	}
	if (root->right)
		return (ft_rec(root->right, data));
	return (NULL);
}

void	*btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	g_cmpf = cmpf;
	if (root)
		return (ft_rec(root, data_ref));
	else
		return (NULL);
}
