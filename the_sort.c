/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:52:12 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 09:36:44 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	array_length(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

void	swap_array(int *bigger, int *smaller)
{
	int	tmp;

	tmp = *bigger;
	*bigger = *smaller;
	*smaller = tmp;
}

void	fill_array(int **arr, char **args, int size)
{
	int	l;

	l = 0;
	while (l < size)
	{
		(*arr)[l] = ft_atoi(args[l]);
		l++;
	}
	(*arr)[l] = '\0';
}

void	the_sort(t_list **stack_a, t_list **stack_b, char **args, int size)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	arr = (int *)malloc((size + 1) * sizeof(int));
	if (!arr)
		return ;
	fill_array(&arr, args, size);
	while (i < size)
	{
		while (j < size)
		{
			if (arr[i] < arr[j])
				swap_array(arr + i, arr + j);
			j++;
		}
		i++;
		j = 0;
	}
	stacks_fill(stack_a, stack_b, arr, size);
	free(arr);
}
