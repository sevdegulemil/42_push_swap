/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:29:10 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 18:06:35 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_dst, t_list **stack_src, char stack_dst_name)
{
	t_list	*src_top;

	if (stack_src == NULL || *stack_src == NULL)
		return ;
	src_top = *stack_src;
	*stack_src = (*stack_src)->next;
	ft_lstadd_front(stack_dst, src_top);
	if (stack_dst_name == 'a')
		write(1, "pa\n", 3);
	if (stack_dst_name == 'b')
		write(1, "pb\n", 3);
}
