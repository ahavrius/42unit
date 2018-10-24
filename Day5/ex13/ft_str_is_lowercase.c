/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:20:07 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 20:23:04 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 1;
	while (str[i] != '\0' && res == 1)
	{
		if (str[i] < 'a' || str[i] > 'z')
			res = 0;
		i++;
	}
	return (res);
}
