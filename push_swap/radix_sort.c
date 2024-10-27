/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:13:42 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 18:07:37 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_check(t_list *stack, int min_flag)
{
	while (stack != NULL)
	{
		if (min_flag == stack->flag)
		{
			stack = stack->next;
			min_flag++;
		}
		else
			return (0);
	}
	return (1);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	stack_a_len;

	i = 0;
	stack_a_len = ft_lstsize(*stack_a);
	while (i < stack_a_len && is_sorted_check(*stack_a, 0) == 0)
	{
		j = 0;
		while (j < stack_a_len)
		{
			if (((((*stack_a)->flag) >> i) & 1) == 0)
				push(stack_b, stack_a, 'b');
			else
				rotate(stack_a, 'a');
			j++;
		}
		while (*stack_b != 0)
			push(stack_a, stack_b, 'a');
		i++;
	}
}
