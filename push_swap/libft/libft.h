/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:41:17 by seemil            #+#    #+#             */
/*   Updated: 2024/04/25 18:00:58 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				flag;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_lstadd_back(t_list **lst, t_list *new_node);
void				ft_lstadd_front(t_list **lst, t_list *new_node);
t_list				*ft_lstnew(int num, int flag);
int					ft_lstsize(t_list *lst);
char				**ft_split(char const *s, char c);

#endif