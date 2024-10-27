/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_3_4_5_arg_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:10:33 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 18:00:36 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_arg(t_list **stack_a, int max_flag)
{
	if ((*stack_a)->flag == max_flag)
		rotate(stack_a, 'a');
}

void	sort_three_arg(t_list **stack_a, int min_flag, int max_flag)
{
	if ((*stack_a)->flag == max_flag)
		rotate(stack_a, 'a');
	else if ((*stack_a)->next->flag == max_flag)
		reverse_rotate(stack_a, 'a');
	if (is_sorted_check(*stack_a, min_flag) != 1)
		swap(*stack_a, 'a');
}

void	sort_four_arg(t_list **stack_a, t_list **stack_b, int min_flag,
		int max_flag)
{
	if ((*stack_a)->next->flag == min_flag)
		swap(*stack_a, 'a');
	else if ((*stack_a)->next->next->flag == min_flag)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->flag == min_flag)
		reverse_rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	sort_three_arg(stack_a, min_flag + 1, max_flag);
	push(stack_a, stack_b, 'a');
}

void	sort_five_arg(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next->flag == 0)
		swap(*stack_a, 'a');
	else if ((*stack_a)->next->next->flag == 0)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->flag == 0)
	{
		reverse_rotate(stack_a, 'a');
		reverse_rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->next->flag == 0)
		reverse_rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	sort_four_arg(stack_a, stack_b, 1, 4);
	push(stack_a, stack_b, 'a');
}
