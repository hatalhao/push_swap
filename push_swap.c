/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:39:45 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/29 00:27:46 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(char **args)
{
	free_args(args);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_alloc(t_list **stack_a, t_list **stack_b, char **args)
{
	free_args(args);
	ft_lstclear(stack_a);
	free(stack_b);
}

void	cases(t_list **stack_a, t_list **stack_b, char **args)
{
	if (ft_lstsize(*stack_a) == 2)
		ft_swap(stack_a, "sa");
	else if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 5)
		the_sort(stack_a, stack_b, args, ft_lstsize(*stack_a));
}
