/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:31:44 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/10 21:41:56 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *scr, int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (scr[j] != '\0' && j < nb)
	{
		dest[i + j] = scr[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
