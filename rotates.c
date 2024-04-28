/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:43:48 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 10:51:01 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **stack, char *str)
{
	t_list	*last;
	t_list	*iter;

	if (!*stack || !stack || ft_lstsize(*stack) < 2)
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
		ft_printf("%s\n", str);
}

void	ft_rotate(t_list **stack, char *str)
{
	t_list	*head;
	t_list	*iter;

	if (!*stack || !stack || ft_lstsize(*stack) < 2)
		return ;
	head = *stack;
	*stack = (*stack)->next;
	head->next = NULL;
	iter = *stack;
	while (iter)
	{
		if (!(iter->next))
			ft_lstadd_back(stack, head);
		iter = iter->next;
	}
	if (str)
		ft_printf("%s\n", str);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !stack_a || !*stack_b || !stack_b)
		return ;
	ft_rotate(stack_a, NULL);
	ft_rotate(stack_b, NULL);
	ft_printf("rr\n");
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate(stack_a, NULL);
	ft_reverse_rotate(stack_b, NULL);
	ft_printf("rrr\n");
}
