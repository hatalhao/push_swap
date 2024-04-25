/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:30:42 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/19 17:47:45 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_filler(t_list **stack_a, char **argv)
{
	char	**args;
	t_list	*head;
	int		i;

	i = 0;
	args = argv;
	while (args[i])
	{
		head = ft_lstnew(ft_atoi(args[i]));
		head->index = i;
		ft_lstadd_back(stack_a, head);
		i++;
	}
}
