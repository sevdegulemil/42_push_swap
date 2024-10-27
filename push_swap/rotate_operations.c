/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:27:40 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 17:58:42 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, char stack_name)
{
	t_list	*tmp;

	if ((stack == NULL) || ((*stack)->next == NULL))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	if (stack_name == 'a')
		write(1, "ra\n", 3);
	if (stack_name == 'b')
		write(1, "rb\n", 3);
}

void	rotate_together(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a, 'a');
	rotate(stack_b, 'b');
	write(1, "rr\n", 3);
}
