/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:08:34 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 16:17:27 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	*joined;
	char	**args;

	joined = NULL;
	if (argc < 2)
		return (0);
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
