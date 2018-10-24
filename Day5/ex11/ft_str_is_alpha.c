/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:53:40 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 19:09:15 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 1;
	while (str[i] != '\0' && res == 1)
	{
		if (str[i] < 'a' || str[i] > 'z')
			res = -1;
		if (res == -1 && (str[i] < 'A' || str[i] > 'Z'))
			res = 0;
		else
			res = 1;
		i++;
	}
	return (res);
}
