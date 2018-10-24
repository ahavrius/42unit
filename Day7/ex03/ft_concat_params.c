/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:37:35 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/13 22:30:03 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_len(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;
	char	*c;

	i = 1;
	j = 0;
	len = argc;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	c = (char *)malloc(len - 1);
	return (c);
}

char	*ft_end(char *c, int argc, int k)
{
	if (argc > 1)
	{
		c[k - 1] = '\0';
		return (c);
	}
	c = (char *)malloc(1);
	c[0] = '\0';
	return (c);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*c;

	i = 1;
	j = 0;
	k = 0;
	c = ft_len(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			c[k] = argv[i][j];
			k++;
			j++;
		}
		c[k] = '\n';
		k++;
		i++;
	}
	c = ft_end(c, argc, k);
	return (c);
}
