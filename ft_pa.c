/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:30:56 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/25 05:26:05 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, tmp);
	ft_printf("pa\n");
}
