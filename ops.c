/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:46:36 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 10:52:01 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **first, char *str)
{
	t_list	*swap;
	t_list	*link;

	if (!*first || !first)
		return ;
	link = NULL;
	if ((*first)->next->next)
		link = (*first)->next->next;
	swap = *first;
	*first = (*first)->next;
	(*first)->next = swap;
	(*first)->next->next = link;
	if (str)
		ft_printf("%s\n", str);
}

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, tmp);
	ft_printf("pa\n");
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, tmp);
	ft_printf("pb\n");
}

void	ft_ss(t_list **firsta, t_list **firstb)
{
	ft_swap(firsta, NULL);
	ft_swap(firstb, NULL);
	ft_printf("ss\n");
}
