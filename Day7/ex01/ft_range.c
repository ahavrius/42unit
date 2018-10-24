/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:19:22 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/13 20:59:47 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *p;
	int i;

	i = 0;
	p = NULL;
	if ((long)min >= (long)max)
		return (p);
	p = (int *)malloc(4 * ((long)max - (long)min));
	while (i < (long)max - (long)min)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
