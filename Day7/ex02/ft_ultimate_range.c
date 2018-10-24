/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:56:17 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/13 17:49:33 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	long	len;
	int		*str;

	if ((long)min >= (long)max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	len = (long)max - (long)min;
	str = (int *)malloc(4 * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	*range = str;
	return (len);
}
