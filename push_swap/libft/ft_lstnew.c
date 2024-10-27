/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:01:03 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 18:10:46 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int num, int flag)
{
	t_list	*list_ptr;

	list_ptr = (t_list *)malloc(sizeof(t_list));
	(*list_ptr).content = num;
	(*list_ptr).flag = flag;
	(*list_ptr).next = NULL;
	return (list_ptr);
}
