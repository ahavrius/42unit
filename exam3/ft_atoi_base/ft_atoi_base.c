/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:14:03 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 15:45:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_number(char c, int *stop, int base)
{
	if (base <= 10)
	{
		if (c >= '0' && c < ('0' + base))
			return (c - '0');
		*stop = 0;
		return (0);
	}
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c < 'a' + base - 10)
		return (c - 'a' + 10);
	if (c >= 'A' && c < 'A' + base - 10)
		return (c - 'A' + 10);
	*stop = 0;
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	unsigned int	n;
	int				sign;
	int				i;
	int				stop;

	sign = 1;
	i = 0;
	n = 0;
	stop = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0' && stop)
	{
		n = n * str_base + ft_number(str[i], &stop, str_base);
		i++;
	}
	if (stop == 0)
		n = n / str_base;
	n = n * sign;
	return (n);
}
