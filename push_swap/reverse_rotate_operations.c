/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:29:47 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 17:58:22 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack, char stack_name)
{
	t_list	*temp;

	if ((stack == NULL) || ((*stack)->next == NULL))
		return ;
	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	ft_lstadd_front(stack, (temp->next));
	temp->next = NULL;
	if (stack_name == 'a')
		write(1, "rra\n", 4);
	if (stack_name == 'b')
		write(1, "rrb\n", 4);
}

void	reverse_rotate_together(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a, 'a');
	reverse_rotate(stack_b, 'b');
	write(1, "rrr\n", 4);
}
