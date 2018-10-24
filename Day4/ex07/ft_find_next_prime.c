/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:58:53 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/07 22:42:44 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int i;
	int c;

	i = 2;
	c = 1;
	while (i < nb && c == 1)
	{
		if (nb % i == 0)
		{
			c = 0;
		}
		i++;
	}
	return (c);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
	{
		return (2);
	}
	i = nb;
	while (i <= 2147483647)
	{
		if (is_prime(i) == 1)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
