/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:06:40 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/11 14:39:18 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

char			ft_check(char *str, unsigned int *len)
{
	int		i;
	char	c;
	int		j;

	i = 0;
	c = 'y';
	while (str[i] != '\0' && c == 'y')
	{
		if (str[i] == '+' || str[i] == '-')
			c = 'n';
		j = i + 1;
		while (str[j] != '\0' && c == 'y')
		{
			if (str[j] == str[i])
				c = 'n';
			j++;
		}
		i++;
	}
	if (i < 2)
		c = 'n';
	*len = i;
	return (c);
}

unsigned int	ft_sign(int nbr)
{
	unsigned int sign;

	if (nbr < 0)
	{
		sign = nbr * -1;
		ft_putchar('-');
	}
	else
		sign = nbr;
	return (sign);
}

void			ft_base(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr >= len)
		ft_base(nbr / len, base, len);
	ft_putchar(base[nbr % len]);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	char			c;
	unsigned int	len;

	i = 0;
	len = 0;
	c = ft_check(base, &len);
	if (c == 'y')
	{
		i = ft_sign(nbr);
		ft_base(i, base, len);
	}
}
