/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:12:13 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/08 13:33:30 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clean(int *a)
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	clean_res(int *res)
{
	int i;

	i = 0;
	while (i < 8)
	{
		res[i] = 0;
	}
}

void	put_q(int *a, int co,int ro)
{
	int i;

	i = 0;
	while (i < 8)
	{
		a[co][i] = 1;
		a[i][ro] = 1;
		a[i][i + ro] = 1;
		a[i + co][i] = 1;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int a[8][8];
	int res[8];
	int i;
	int j;

	clean(a);
	clean_res(res);
	
}
