/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 18:51:37 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/23 14:31:32 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		check(char c)
{
	return (c == '*' || c == '/' || c == '%');
}

void	pop(void)
{
	t_list	*current;

	if (g_list2->data == '+')
		g_list1->next->data = g_list1->data + g_list1->next->data;
	if (g_list2->data == '-')
		g_list1->next->data = g_list1->next->data - g_list1->data;
	if (g_list2->data == '*')
		g_list1->next->data = g_list1->data * g_list1->next->data;
	if (g_list2->data == '/')
		g_list1->next->data = g_list1->next->data / g_list1->data;
	if (g_list2->data == '%')
		g_list1->next->data = g_list1->next->data % g_list1->data;
	if (g_list2->data != '(')
	{
		current = g_list1;
		g_list1 = g_list1->next;
		free(current);
	}
	current = g_list2;
	g_list2 = g_list2->next;
	free(current);
}

void	push2(int i, int *flag)
{
	if (g_str[i] == '(')
		ft_list_push_front(&g_list2, '(');
	if (g_str[i] == ')')
	{
		*flag = 0;
		while (g_list2 && g_list2->data != '(')
			pop();
		pop();
	}
	if (check(g_str[i]))
	{
		*flag = 0;
		while (g_list2 && check(g_list2->data))
			pop();
		ft_list_push_front(&g_list2, g_str[i]);
	}
	if (g_str[i] == '+' || g_str[i] == '-')
	{
		flag = 0;
		while (g_list2 && g_list2->data != '(')
			pop();
		ft_list_push_front(&g_list2, g_str[i]);
	}
}

void	push(void)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (g_str[i])
	{
		if (g_str[i] == '-' && flag)
		{
			ft_list_push_front(&g_list1, ft_atoi(&i));
			flag = 0;
		}
		else if (g_str[i] >= '0' && g_str[i] <= '9')
		{
			ft_list_push_front(&g_list1, ft_atoi(&i));
			flag = 0;
		}
		push2(i, &flag);
		if (g_str[i] == '(')
			flag = 1;
		i++;
	}
}

int		eval_expr(char *str)
{
	int number;

	g_list1 = NULL;
	g_list2 = NULL;
	g_str = str;
	push();
	while (g_list2)
		pop();
	if (g_list1)
	{
		number = g_list1->data;
		free(g_list1);
	}
	else
		number = 0;
	return (number);
}
