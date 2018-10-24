/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 10:53:47 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 18:04:45 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int		i;
	unsigned int		j;
	char				*t;

	i = 0;
	j = 0;
	t = (void *)0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (str[i + j] == '\0' || to_find[j] == '\0')
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (t);
}
