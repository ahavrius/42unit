/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:29:06 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/16 17:51:44 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_shift(char *str, int i)
{
	if (str[i] != '*')
		return (i + 1);
	while (str[i] == '*')
		i++;
	return (i);
}

int		ft_shift_match(char *str1, char *str2, int i, int j)
{
	int k;

	k = 0;
	while (str1[i + k] == str2[j + k] && str1[i + k] && str2[j + k] != '*')
		k++;
	return (k);
}

int		ft_shift_search(char *str1, char *str2, int i, int j)
{
	while (str1[i] && str1[i] != str2[j])
		i++;
	return (i);
}

int		ft_recur(char *str1, char *str2, int i, int j)
{
	int res;

	j = ft_shift(str2, j) - 1;
	if (str2[j] == '*' && str2[j + 1] == '\0')
		return (1);
	if (str2[j] != '*' && str1[i] != str2[j])
		return (0);
	if (str1[i] == str2[j] && str1[i] == '\0')
		return (1);
	if (str1[i] == '\0' || str2[j] == '\0')
		return (0);
	if (str2[j] == '*')
	{
		res = ft_recur(str1, str2, ft_shift_search(str1,
						str2, i, j + 1), j + 1);
		if (res == 0)
			return (ft_recur(str1, str2, i + 1, j));
		else
			return (1);
	}
	if (str2[j] != '*' && str1[i] == str2[j])
		return (ft_recur(str1, str2, i + ft_shift_match(str1, str2,
							i, j), j + ft_shift_match(str1, str2, i, j)));
	else
		return (0);
}

int		match(char *s1, char *s2)
{
	return (ft_recur(s1, s2, 0, 0));
}
