/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:57:50 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/09 20:26:28 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int a, char c1, char c2, char c3)
{
	int i;

	i = 0;
	if (a > 0)
	{
		ft_putchar(c1);
	}
	while (i < a - 2)
	{
		ft_putchar(c2);
		i++;
	}
	if (a > 1)
	{
		ft_putchar(c3);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (y > 0)
	{
		line(x, '/', '*', '\\');
	}
	while (i < y - 2)
	{
		line(x, '*', ' ', '*');
		i++;
	}
	if (y > 1)
	{
		line(x, '\\', '*', '/');
	}
}
