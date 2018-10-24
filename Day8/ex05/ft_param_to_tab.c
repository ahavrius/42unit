/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 09:49:08 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/14 14:00:07 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_copy(char *src, int *len)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i] != '\0')
		i++;
	c = (char *)malloc(i + 1);
	*len = i;
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*prt;
	int					i;
	int					j;

	prt = (t_stock_par *)malloc((long)ac * sizeof(t_stock_par));
	i = 0;
	while (i < ac)
	{
		prt[i].str = av[i];
		prt[i].copy = ft_copy(av[i], &j);
		prt[i].size_param = j;
		prt[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (prt);
}
