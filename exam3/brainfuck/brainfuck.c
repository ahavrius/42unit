/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 16:48:14 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 17:52:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		g_array[2048];
int		g_pointer;

int		shift_left(char *str, int i)
{
	int count;

	count = 0;
	i--;
	while (str[i] != '[' || count != 0)
	{
		if (str[i] == '[')
			count++;
		if (str[i] == ']')
			count--;
		i--;
	}
	return (i);
}

int		shift_right(char *str, int i)
{
	int count;

	count = 0;
	i++;
	while (str[i] != ']' || count != 0)
	{
		if (str[i] == '[')
			count++;
		if (str[i] == ']')
			count--;
		i++;
	}
	return (i);
}

int		fuck(char *str, int i)
{
	char k;

	if (str[i] == '+')
		g_array[g_pointer]++;
	else if (str[i] == '-')
		g_array[g_pointer]--;
	else if (str[i] == '>')
		g_pointer++;
	else if (str[i] == '<')
		g_pointer--;
	else if (str[i] == '[' && g_array[g_pointer] == 0)
		i = shift_right(str, i);
	else if (str[i] == ']' && g_array[g_pointer] != 0)
		i = shift_left(str, i);
	else if (str[i] == '.')
	{
		k = g_array[g_pointer];
		write(1, &k, 1);
	}
	i++;
	return (i);
}

void	init(void)
{
	int i;

	i = 0;
	while (i < 2048)
	{
		g_array[i] = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	g_pointer = 0;
	if (argc > 1)
	{
		i = 0;
		init();
		while (argv[1][i])
		{
			i = fuck(argv[1], i);
		}
	}
	return (0);
}
