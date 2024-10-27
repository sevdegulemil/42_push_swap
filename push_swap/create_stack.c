/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:30:02 by seemil            #+#    #+#             */
/*   Updated: 2024/10/27 17:02:44 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	is_full_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			return ;
		i++;
	}
	error();
}

static void	numeric_check(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i] != 0)
	{
		j = 0;
		is_full_space(str[i]);
		while (str[i][j] != '\0')
		{
			if ((str[i][j] >= '0' && str[i][j] <= '9') || str[i][j] == ' '
				|| (str[i][j] == '-' && str[i][j + 1] >= '0' && str[i][j
					+ 1] <= '9'))
				j++;
			else
				error();
		}
		i++;
	}
}

void	is_duplicate_check(int num, t_list *list)
{
	while (list != 0)
	{
		if (list->content == num)
			error();
		list = list->next;
	}
}

static void	free_split(char **temp_arr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(temp_arr[i]);
		i++;
	}
}

void	create_stack(int args, char **argv, t_list **stack_a)
{
	int		i;
	int		j;
	char	**temp_arr;
	int		num;
	t_list	*new_node;

	i = 1;
	numeric_check(argv);
	while (i < args)
	{
		temp_arr = ft_split(argv[i], ' ');
		j = 0;
		while (temp_arr[j] != 0)
		{
			num = ft_atoi(temp_arr[j]);
			is_duplicate_check(num, *stack_a);
			new_node = ft_lstnew(num, -1);
			ft_lstadd_back(stack_a, new_node);
			j++;
		}
		free_split(temp_arr, j);
		i++;
		free(temp_arr);
	}
}
