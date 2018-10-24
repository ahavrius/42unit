/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:24:08 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 20:33:49 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 1;
	while (str[i] != '\0' && res == 1)
	{
		if (str[i] < 32)
			res = 0;
		i++;
	}
	return (res);
}
