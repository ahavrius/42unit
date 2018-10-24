/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:27:42 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 13:52:16 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	int				data;
}					t_list;

t_list				*g_list1;
t_list				*g_list2;
char				*g_str;

t_list				*ft_create_elem(int data);
void				ft_list_push_front(t_list **begin_list, int data);
int					ft_atoi(int *j);
void				ft_putnbr(int nb);
int					eval_expr(char *str);
void				ft_putchar(char c);

#endif
