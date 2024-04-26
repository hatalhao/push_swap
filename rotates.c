/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:43:48 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 11:46:49 by hatalhao         ###   ########.fr       */
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
		ft_printf("%s\n", str);
}

void	ft_rotate(t_list **stackb, char *str)
{
	t_list	*head;
	t_list	*iter;

	if (!*stackb || !stackb)
		return ;
	head = *stackb;
	*stackb = (*stackb)->next;
	head->next = NULL;
	iter = *stackb;
	while (iter)
	{
		if (!(iter->next))
			ft_lstadd_back(stackb, head);
		iter = iter->next;
	}
	if (str)
		ft_printf("%s\n", str);
}

void	ft_rr(t_list **stacka, t_list **stackb)
{
	if (!*stacka || !stacka || !*stackb || !stackb)
		return ;
	ft_rotate(stacka, NULL);
	ft_rotate(stackb, NULL);
	ft_printf("rr\n");
}

void	ft_rrr(t_list **stacka, t_list **stackb)
{
	ft_reverse_rotate(stacka, NULL);
	ft_reverse_rotate(stackb, NULL);
	ft_printf("rrr\n");
}
