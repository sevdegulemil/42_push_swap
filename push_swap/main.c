/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:30:22 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 20:24:00 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

int	main(int args, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (args > 1)
	{
		create_stack(args, argv, &stack_a);
		flag_assign(&stack_a);
		sorting(ft_lstsize(stack_a), &stack_a, &stack_b);
	}
	return (0);
}
