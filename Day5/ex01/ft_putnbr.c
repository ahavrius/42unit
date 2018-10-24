/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 23:40:15 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 12:08:33 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_putnbr(int nb)
{
	unsigned int x;

	if (nb < 0)
	{
		ft_putchar('-');
		x = nb * -1;
	}
	else
		x = nb;
	if (x >= 10)
		ft_putnbr(x / 10);
	ft_putchar(x % 10 + '0');
}
