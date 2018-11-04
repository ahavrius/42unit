/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 14:10:45 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 14:20:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *c)
{
	int i;
	int j;
	int shift;

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		shift = c[i] + 1;
		if (c[i] >= 'a' && c[i] <= 'z')
			shift = 'a';
		else if (c[i] >= 'A' && c[i] <= 'Z')
			shift = 'A';
		else
			write(1, &(c[i]), 1);
		while (j <= (c[i] - shift))
		{
			write(1, &(c[i]), 1);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
