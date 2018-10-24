/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:55:58 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/11 19:42:43 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	up_case(char *str, unsigned int i, char c)
{
	if (c == 'y')
		str[i] += 'A' - 'a';
	return ('n');
}

char	low_case(char *str, unsigned int i, char c)
{
	if (c == 'n')
		str[i] += 'a' - 'A';
	return ('n');
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;

	c = 'y';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			c = 'n';
		else if (str[i] >= 'a' && str[i] <= 'z')
			c = up_case(str, i, c);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = low_case(str, i, c);
		else
			c = 'y';
		i++;
	}
	return (str);
}
