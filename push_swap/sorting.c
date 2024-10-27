/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:48:28 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 17:59:06 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(int len, t_list **stack_a, t_list **stack_b)
{
	if (!(is_sorted_check(*stack_a, 0)))
	{
		if (len == 2)
			sort_two_arg(stack_a, 1);
		else if (len == 3)
			sort_three_arg(stack_a, 0, 2);
		else if (len == 4)
			sort_four_arg(stack_a, stack_b, 0, 3);
		else if (len == 5)
			sort_five_arg(stack_a, stack_b);
		else
			radix_sort(stack_a, stack_b);
	}
}
