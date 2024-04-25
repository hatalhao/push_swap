/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:26 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/18 01:51:27 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **stack, char *str)
{
	t_list	*last;
	t_list	*iter;

	if (!*stack || !stack)
		return ;
	iter = *stack;
	while (iter)
	{
		if (!(iter->next->next))
		{
			last = iter->next;
			iter->next = NULL;
			ft_lstadd_front(stack, last);
		}
		iter = iter->next;
	}
	if (str)
		printf("%s\n", str);
	}
