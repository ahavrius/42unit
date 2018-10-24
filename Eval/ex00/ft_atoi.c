/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:22:49 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 13:46:20 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_atoi(int *j)
{
	unsigned int	a;
	int				i;
	int				sign;

	a = 0;
	i = *j;
	sign = 1;
	if (*(g_str + i) == '-')
	{
		sign *= -1;
		i++;
	}
	while ((g_str[i] >= '0') && (g_str[i] <= '9'))
	{
		a = a * 10 + *(g_str + i) - '0';
		i++;
	}
	a *= sign;
	*j = i - 1;
	return (a);
}
