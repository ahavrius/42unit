/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:47:03 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 20:18:21 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 1;
	while (str[i] != '\0' && res == 1)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			res = 0;
		i++;
	}
	return (res);
}
