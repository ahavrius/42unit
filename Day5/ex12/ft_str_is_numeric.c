/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:26:44 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 20:19:10 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 1;
	while (str[i] != '\0' && res == 1)
	{
		if (str[i] < '0' || str[i] > '9')
			res = 0;
		i++;
	}
	return (res);
}
