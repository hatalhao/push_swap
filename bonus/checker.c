/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 05:23:33 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 12:16:08 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (-1);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] + (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	check_ops(char *str)
{
	if (!ft_strcmp("ra\n", str))
		return (0);
	else if (!ft_strcmp("rb\n", str))
		return (0);
	else if (!ft_strcmp("rr\n", str))
		return (0);
	else if (!ft_strcmp("sa\n", str))
		return (0);
	else if (!ft_strcmp("sb\n", str))
		return (0);
	else if (!ft_strcmp("ss\n", str))
		return (0);
	else if (!ft_strcmp("rra\n", str))
		return (0);
	else if (!ft_strcmp("rrb\n", str))
		return (0);
	else if (!ft_strcmp("rrr\n", str))
		return (0);
	else if (!ft_strcmp("pb\n", str))
		return (0);
	else if (!ft_strcmp("pa\n", str))
		return (0);
	return (1);
}

void	exec_ops(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strcmp("ss\n", str))
		ss(stack_a, stack_b);
	else if (!ft_strcmp("sa\n", str))
		swap(stack_a);
	else if (!ft_strcmp("sb\n", str))
		swap(stack_b);
	else if (!ft_strcmp("pa\n", str))
		pa(stack_a, stack_b);
	else if (!ft_strcmp("pb\n", str))
		pb(stack_a, stack_b);
	else if (!ft_strcmp("ra\n", str))
		rotate(stack_a);
	else if (!ft_strcmp("rb\n", str))
		rotate(stack_b);
	else if (!ft_strcmp("rr\n", str))
		rr(stack_a, stack_b);
	else if (!ft_strcmp("rra\n", str))
		reverse_rotate(stack_a);
	else if (!ft_strcmp("rrb\n", str))
		reverse_rotate(stack_b);
	else if (!ft_strcmp("rrr\n", str))
		rrr(stack_a, stack_b);
}

void	checker(t_list **stack_a, t_list **stack_b, char **args)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		if (check_ops(str))
		{
			free_alloc(stack_a, stack_b, args);
			free(str);
			write(2, "Error", 5);
			exit(1);
		}
		exec_ops(stack_a, stack_b, str);
		free(str);
	}
	if (ft_sorted(*stack_a) && !*stack_b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	**args;
	char	*joined;

	joined = NULL;
	if (argc < 2)
		return (0);
	args = argv + 1;
	ft_parse(argc, args);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	args = join_split(joined, args);
	ft_filler(stack_a, args);
	checker(stack_a, stack_b, args);
	free_alloc(stack_a, stack_b, args);
	return (0);
}
