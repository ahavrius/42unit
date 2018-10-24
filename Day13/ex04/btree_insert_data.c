/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:10:35 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/21 21:46:09 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		(*g_cmpf)(void *, void *);

void	ft_rec(t_btree *root, t_btree *new)
{
	if (root->left && g_cmpf(root->item, new->item) > 0)
		ft_rec(root->left, new);
	else if (g_cmpf(root->item, new->item) > 0)
		root->left = new;
	else if (root->right)
		ft_rec(root->right, new);
	else
		root->right = new;
}

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	t_btree	*new;
	t_btree	*head;

	g_cmpf = cmpf;
	new = btree_create_node(item);
	head = *root;
	if (*root)
		ft_rec(head, new);
	else
		*root = new;
}
