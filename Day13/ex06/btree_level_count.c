/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:16:37 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/21 12:38:02 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		g_count;

void	ft_rec(t_btree *root, int i)
{
	if (root)
	{
		ft_rec(root->left, i + 1);
		ft_rec(root->right, i + 1);
	}
	else if (i > g_count)
		g_count = i;
}

int		btree_level_count(t_btree *root)
{
	g_count = 0;
	if (root)
		ft_rec(root, 0);
	return (g_count);
}
