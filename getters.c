/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:56 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 11:49:14 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_list *stack)
{
	int	max;

	max = stack->nbr;
	while (stack)
	{
		if (stack->nbr > max)
			max = stack->nbr;
		stack = stack->next;
	}
	return (max);
}

int	get_index(t_list *stack, int max)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->nbr == max)
			return (index);
		index++;
		stack = stack->next;
	}
	return (index);
}

int	get_min(t_list *list)
{
	int	min;
	int	index;

	min = list->nbr;
	index = list->index;
	while (list)
	{
		if (list->nbr < min)
		{
			min = list->nbr;
			index = list->index;
		}
		list = list->next;
	}
	return (index);
}
