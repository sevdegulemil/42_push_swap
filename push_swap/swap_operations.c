/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:28:37 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 17:59:22 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *stack, char stack_name)
{
	int	temp;
	int	temp_flag;

	if (stack == NULL || (stack->next == NULL))
		return ;
	temp = stack->content;
	temp_flag = stack->flag;
	stack->content = stack->next->content;
	stack->flag = stack->next->flag;
	stack->next->content = temp;
	stack->next->flag = temp_flag;
	if (stack_name == 'a')
		write(1, "sa\n", 3);
	if (stack_name == 'b')
		write(1, "sb\n", 3);
}

void	swap_together(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a, 'a');
	swap(stack_b, 'b');
	write(1, "ss\n", 3);
}
