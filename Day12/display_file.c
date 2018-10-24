/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 18:05:36 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/20 18:55:00 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_print(char *array)
{
	int		file;
	char	c;
	int		error;

	file = open(array, O_RDONLY);
	if (file == -1)
		return (write(2, "open() failed\n", 14));
	error = 1;
	while (error > 0)
	{
		error = read(file, &c, 1);
		if (error > 0)
			write(1, &c ,1);
	}
	if (error == -1)
		write(2, "read() failed\n", 14);
	error = close(file);
	if (error == -1)
		write(2, "close() failed\n", 15);
	return (0);
}

int		main(int len, char **array)
{
	if (len == 1)
		write(2, "File name missing.", 19);
	else if (len > 2)
		write(2, "Too many arguments.", 20);
	else
		ft_print(array[1]);
	return (0);
}
