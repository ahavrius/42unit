/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 23:12:49 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 23:13:49 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	init(void)
{
	int i;

	i = -1;
	g_rush[0] = &rush00;
	g_rush[1] = &rush01;
	g_rush[2] = &rush02;
	g_rush[3] = &rush03;
	g_rush[4] = &rush04;
	while (++i < 5)
		g_write[i] = malloc(15);
	g_write[0] = "[colle-00] [";
	g_write[1] = "[colle-01] [";
	g_write[2] = "[colle-02] [";
	g_write[3] = "[colle-03] [";
	g_write[4] = "[colle-04] [";
}
