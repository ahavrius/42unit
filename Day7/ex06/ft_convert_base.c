/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:21:12 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/13 12:23:33 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


voidft_putchar(char c);

charft_check(char *str, unsigned int *len)
{
	inti;
	charc;
	intj;

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

unsigned intft_sign(int nbr)
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

voidft_base(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr >= len)
		ft_base(nbr / len, base, len);
	ft_putchar(base[nbr % len]);
}

voidft_putnbr_base(int nbr, char *base)
{
	unsigned inti;
	charc;
	unsigned intlen;

	i = 0;
	len = 0;
	c = ft_check(base, &len);
	if (c == 'y')
	{
		i = ft_sign(nbr);
		ft_base(i, base, len);
	}
}
