/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:13:30 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/20 18:15:08 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str, int where)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i), where);
		i++;
	}
}
