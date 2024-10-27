/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_assign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:51:03 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 18:05:22 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	flag_assign(t_list **stack)
{
	int		flag_num;
	int		stack_len;
	t_list	*temp;
	int		min;
	t_list	*min_node;

	flag_num = 0;
	stack_len = ft_lstsize(*stack);
	while (flag_num < stack_len)
	{
		temp = *stack;
		min = INT_MAX;
		while (temp != NULL)
		{
			if (((temp->content) <= min) && (temp->flag == -1))
			{
				min = temp->content;
				min_node = temp;
			}
			temp = temp->next;
		}
		min_node->flag = flag_num;
		flag_num++;
	}
}
