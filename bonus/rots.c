/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rots.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:43:48 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 14:38:45 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*iter;

	if (!*stack || !stack || !((*stack)->next))
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
}

void	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*iter;

	if (!*stack || !stack)
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
}

void	rr(t_list **stacka, t_list **stackb)
{
	if (!*stacka || !stacka || !*stackb || !stackb)
		return ;
	rotate(stacka);
	rotate(stackb);
}

void	rrr(t_list **stacka, t_list **stackb)
{
	reverse_rotate(stacka);
	reverse_rotate(stackb);
}
