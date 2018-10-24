/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 18:05:36 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/20 20:26:44 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_print(char *array)
{
	int		file;
	char	c;

	file = open(array, O_RDONLY);
	while (read(file, &c, 1) != 0)
		write(1, &c, 1);
	close(file);
}

int		main(int len, char **array)
{
	if (len == 1)
		write(2, "File name missing.\n", 19);
	else if (len > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_print(array[1]);
	return (0);
}
