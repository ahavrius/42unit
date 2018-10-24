/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:35:49 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/06 16:55:17 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	c;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	i = 0;
	while (i < len / 2)
	{
		c = *(str + i);
		*(str + i) = *(str + len - i - 1);
		*(str + len - i - 1) = c;
		i++;
	}
	*(str + len) = '\0';
	return (str);
}
