/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 08:47:21 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/18 09:12:21 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '0')
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*c;
	int		(*cmp)(char *, char *);

	cmp = &ft_strcmp;
	i = 0;
	while (tab[i] != 0)
	{
		j = 1;
		while (tab[j] != 0)
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				c = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = c;
			}
			j++;
		}
		i++;
	}
}
