/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:39:45 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 11:52:07 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	*joined;
	char	**args;

	joined = NULL;
	if (argc < 2)
		return (-1);
	ft_parse(argc, argv + 1);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	args = join_split(joined, argv + 1);
	ft_filler(stack_a, args);
	if (ft_sorted(*stack_a))
	{
		ft_lstclear(stack_a);
		return (free(stack_b), 0);
	}
	cases(stack_a, stack_b, args);
	free_alloc(stack_a, stack_b, args);
	return (0);
}
