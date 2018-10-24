/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_part2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:02:36 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/16 17:34:57 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_all(char **mas)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 0;
	res = 1;
	while (i < 9 && res == 0)
	{
		while (j < 9 && res == 1)
		{
			if (mas[i][j] == '0')
				res = 0;
			j++;
		}
		i++;
	}
	return (res);
}

void	new_place(char **mass, int *i, int *j)
{
	if (*i < 8)
		*i = *i + 1;
	else
	{
		*i = 0;
		*j = *j + 1;
	}
}

int		rec(char **mass, char ***check, int i, int j)
{
	int res;
	int nexti;
	int nextj;
	int k;

	if (validation(mass) == 2)
		return (1);
	if (i > 8 || j > 8)
		return (0);
	if (check[i][j] == NULL)
	{
		new_place(mass, &i, &j);
		return (rec(mass, check, i, j));
	}
	k = 1;
	while (check[i][j][k] != '\0')
	{
		mass[i][j] = check[i][j][k];
		if (validation(mass))
		{
			nexti = i;
			nextj = j;
			new_place(mass, &nexti, &nextj);
			if (rec(mass, check, nexti, nextj))
				return (1);
		}
		k++;
	}
	mass[i][j] = 0;
	return (0);
}
