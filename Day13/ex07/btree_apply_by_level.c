/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:31:14 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/21 21:33:14 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	(*g_applyf)(void *item, int current_level, int is_first_elem);

t_list	*g_list;

void	pop(void)
{
	t_list	*old;
	int		first;
	int		old_level;

	old_level = 0;
	while (g_list)
	{
		if (old_level != g_list->level)
			first = 1;
		else
			first = 0;
		g_applyf(g_list->data, g_list->level, first);
		old_level = g_list->level;
		old = g_list;
		g_list = g_list->next;
		free(old);
	}
}

void	push(t_btree *root, int level)
{
	t_list	*elem;
	t_list	*start;

	elem = malloc(sizeof(t_list));
	elem->data = root->item;
	elem->level = level;
	elem->next = NULL;
	start = g_list;
	if (!g_list)
		g_list = elem;
	else
	{
		while (start->next)
			start = start->next;
		start->next = elem;
	}
}

void	ft_rec(t_btree *root, int level)
{
	if (root->left)
		push(root->left, level + 1);
	if (root->right)
		push(root->right, level + 1);
	if (root->left)
		ft_rec(root->left, level + 1);
	if (root->right)
		ft_rec(root->right, level + 1);
}

void	btree_apply_by_level(t_btree *root,
void (*applyf)(void *item, int current_level, int is_first_elem))
{
	g_applyf = applyf;
	g_list = NULL;
	if (root)
	{
		applyf(root->item, 0, 1);
		ft_rec(root, 0);
		pop();
	}
}
