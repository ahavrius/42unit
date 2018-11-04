/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:51:16 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/26 22:51:17 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	g_buff = 1001;
	g_begin_list = NULL;
	if (argc == 1)
	{
		if (ft_read_input() > 0)
		{
			ft_check_array();
			ft_write();
			ft_free();
		}
	}
	while (i < argc)
	{
		if (ft_read_file(argv[i]) > 0)
		{
			ft_check_array();
			ft_write();
			ft_free();
		}
		i++;
	}
	return (0);
}
