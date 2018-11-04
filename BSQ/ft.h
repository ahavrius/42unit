/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:50:31 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/26 22:50:32 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int					g_row;
int					g_column;
char				g_empty;
char				g_occup;
char				g_full;
char				**g_arr;
int					g_i;
int					g_j;
int					g_size;
int					g_buff;
char				*g_input;

void				ft_write(void);
int					ft_read_nb(void);
int					ft_get_line(int where);
int					ft_read_fl(int where);
int					ft_read_array(int where);
int					ft_read_file(char *str);
int					ft_read_input(void);
void				ft_check_cube(int *i, int *j);
void				ft_check_array(void);
int					ft_get_buff(int where, int *len, char **res);
void				ft_free(void);
void				ft_list_push_front(char *data);
int					ft_list_clear(int size);
void				ft_clear_element(void);
int					ft_local_check(char x, int y, int where);
int					ft_free_error(int k);
void				ft_validation(int *x, int *y, int size_cur);

typedef struct		s_list
{
	char			*data;
	struct s_list	*next;
}					t_list;

t_list				*ft_create_elem(char *data);
t_list				*g_begin_list;

#endif
