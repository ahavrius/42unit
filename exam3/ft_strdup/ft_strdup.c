/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 14:27:20 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 14:42:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[len] != '\0')
		len++;
	c = (char *)malloc(len + 1);
	if (c == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
