/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:57:07 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 17:57:34 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	error(void);

int		is_sorted_check(t_list *stack, int min_flag);

void	is_duplicate_check(int num, t_list *list);
void	create_stack(int args, char **argv, t_list **stack_a);

void	flag_assign(t_list **stack);

void	sorting(int len, t_list **stack_a, t_list **stack_b);

void	sort_two_arg(t_list **stack_a, int max_flag);
void	sort_three_arg(t_list **stack_a, int min_flag, int max_flag);
void	sort_four_arg(t_list **stack_a, t_list **stack_b, int min_flag,
			int max_flag);
void	sort_five_arg(t_list **stack_a, t_list **stack_b);

void	radix_sort(t_list **stack_a, t_list **stack_b);

void	push(t_list **stack_dst, t_list **stack_src, char stack_dst_name);

void	reverse_rotate(t_list **stack, char stack_name);
void	reverse_rotate_together(t_list **stack_a, t_list **stack_b);

void	rotate(t_list **stack, char stack_name);
void	rotate_together(t_list **stack_a, t_list **stack_b);

void	sorting(int len, t_list **stack_a, t_list **stack_b);

void	swap(t_list *stack, char stack_name);
void	swap_together(t_list *stack_a, t_list *stack_b);

#endif