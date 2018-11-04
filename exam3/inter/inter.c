/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 14:51:45 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 15:04:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *s1, char *s2)
{
	int i;
	int j;
	int flag;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
			{
				flag = 1;
				s2[j] = '\n';
			}
			j++;
		}
		if (flag == 1)
			write(1, &s1[i], 1);
		i++;
	}
}

int		main(int argc, char **argn)
{
	if (argc == 3)
		ft_print(argn[1], argn[2]);
	write(1, "\n", 1);
	return (0);
}
