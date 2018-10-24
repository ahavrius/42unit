/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mian.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:22:26 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/12 16:27:34 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int 	main(int argc, char **argv)
{
	char *a;

	a = ft_concat_params(argc, argv);
	printf("%s", a);
	return (0);
}
