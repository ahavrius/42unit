/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:42:16 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 23:19:42 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_H

# define __FT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	(*g_rush[5])(int, int);
char	*g_write[5];
char	**g_arr1;
char	**g_arr2;
int		g_x2;
int		g_y2;
void	init(void);
char	**ft_new(int row, int col);
void	ft_free(char **c, int row);
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
int		check_arr(int row, int col);
void	ft_putnbr(int nb);
void	line (int a, char c1, char c2, char c3);

#endif
