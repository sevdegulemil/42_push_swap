/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:14:31 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 18:09:12 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*node;

	if (*lst == NULL)
		*lst = new_node;
	else
	{
		node = *lst;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
}
