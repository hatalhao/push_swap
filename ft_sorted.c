/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:41 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 11:38:19 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_list *stack_a)
{
	while (stack_a && stack_a->next)
	{
		if (stack_a->nbr > stack_a->next->nbr)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
