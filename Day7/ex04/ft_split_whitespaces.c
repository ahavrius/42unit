/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:50:42 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/12 23:09:28 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_check(char c)
{
	if (c != '\0' && c != ' ' && c != '\t' && c != '\n')
		return (1);
	return (0);
}

unsigned int	ft_len(char *str)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = 1;
	if (ft_check(str[0]))
		len++;
	while (str[i] != '\0')
	{
		if ((ft_check(str[i]) - 1) && ft_check(str[i + 1]))
			len++;
		i++;
	}
	return (len);
}

int				ft_len_word(char *str, int i, int *j)
{
	int len;

	*j = 0;
	len = 0;
	while (ft_check(str[i + *j]))
	{
		(*j)++;
		len++;
	}
	return (len + 1);
}

char			*ft_copy(char *str, int i, int len)
{
	char	*c;
	int		j;

	j = 0;
	c = (char *)malloc(len);
	while (j < len - 1)
	{
		c[j] = str[i + j];
		j++;
	}
	c[j] = '\0';
	return (c);
}

char			**ft_split_whitespaces(char *str)
{
	char	**c;
	int		len;
	int		i;
	int		j;
	int		k;

	len = ft_len(str);
	c = (char **)malloc(len * 8);
	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (ft_check(str[i]))
		{
			len = ft_len_word(str, i, &j);
			c[k] = ft_copy(str, i, len);
			k++;
			i += j;
		}
		else
			i++;
	}
	c[k] = 0;
	return (c);
}
