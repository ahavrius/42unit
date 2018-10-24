/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:10:23 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/06 22:38:58 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	my_check(int a, int n)
{
	char	c;
	int		i;

	c = 'y';
	i = 0;
	while (c == 'y' && i < n - 1)
	{
		if (a % 10 <= (a / 10) % 10)
		{
			c = 'n';
		}
		i++;
		a /= 10;
	}
	return (c);
}

int		my_count(int n)
{
	int		d;
	int		i;

	d = 1;
	i = 0;
	while (i < n)
	{
		d *= 10;
		i++;
	}
	return (d);
}

char	my_print(int a, int n, int d)
{
	int		i;
	char	check;
	int		value;

	check = 'k';
	i = 0;
	while (i < n)
	{
		value = (a % d - a % (d / 10)) / (d / 10);
		ft_putchar(value);
		if (value != i + 1 + (9 - n) || check != 'k')
		{
			check = 'c';
		}
		i++;
		d /= 10;
	}
	if (check != 'k')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (check);
}

void	ft_print_combn(int n)
{
	int		a;
	char	c;
	int		d;

	d = my_count(n);
	a = 0;
	while (a < d)
	{
		c = my_check(a, n);
		if (c == 'y')
		{
			c = my_print(a, n, d);
			if (c == 'k')
			{
				a = d;
			}
		}
		a++;
	}
}
