/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:46:36 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 10:53:25 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_list **first)
{
	t_list	*swap;
	t_list	*link;

	if (!*first || !first || !(*first)->next)
		return ;
	link = NULL;
	if ((*first)->next->next)
		link = (*first)->next->next;
	swap = *first;
	*first = (*first)->next;
	(*first)->next = swap;
	(*first)->next->next = link;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, tmp);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, tmp);
}

void	ss(t_list **first_a, t_list **first_b)
{
	swap(first_a);
	swap(first_b);
}
