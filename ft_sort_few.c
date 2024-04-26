/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_few.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:50:22 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 11:40:13 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->nbr;
	second = (*stack_a)->next->nbr;
	third = (*stack_a)->next->next->nbr;
	if ((first < second) && (second > third) && (first < third))
	{
		ft_swap(stack_a, "sa");
		ft_rotate(stack_a, "ra");
	}
	else if ((first > second) && (second < third) && (first < third))
		ft_swap(stack_a, "sa");
	else if ((first < second) && (second > third) && (first > third))
		ft_reverse_rotate(stack_a, "rra");
	else if ((first > second) && (second > third) && (first > third))
	{
		ft_swap(stack_a, "sa");
		ft_reverse_rotate(stack_a, "rra");
	}
	else if ((first > second) && (second < third) && (first > third))
		ft_rotate(stack_a, "ra");
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	t_list	*iter;

	iter = *stack_a;
	while (iter->index != get_min(*stack_a))
		iter = iter->next;
	while ((iter != *stack_a))
	{
		if (iter->index == 1)
			ft_rotate(stack_a, "ra");
		else
			ft_reverse_rotate(stack_a, "rra");
		if (ft_sorted(*stack_a))
			return ;
	}
	ft_pb(stack_a, stack_b);
	sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*iter;

	iter = *stack_a;
	while (iter->index != get_min(*stack_a))
		iter = iter->next;
	while ((iter != *stack_a))
	{
		if (iter->index == 1)
			ft_rotate(stack_a, "ra");
		else
			ft_reverse_rotate(stack_a, "rra");
		if (ft_sorted(*stack_a))
			return ;
	}
	ft_pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
