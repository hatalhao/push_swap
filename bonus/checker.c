/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 05:23:33 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 16:48:59 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

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
	if (!ft_strncmp("ra\n", str,3))
		return(0);
	else if (!ft_strncmp("sa\n", str,3))
		return(0);
	else if (!ft_strncmp("rra\n", str,4))
		return(0);
	else if (!ft_strncmp("pb\n", str,3))
		return(0);
	else if (!ft_strncmp("pa\n", str,3))
		return(0);
	else if (!ft_strncmp("sb\n", str,3))
		return(0);
	return (1); 
}
void	exec_ops(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strcmp("ra\n", str))
		rotate(stack_a);
	else if (!ft_strcmp("rb\n", str))
		rotate(stack_b);
	else if (!ft_strcmp("sa\n", str))
		swap(stack_a);
	else if (!ft_strcmp("rra\n", str))
		reverse_rotate(stack_a);
	else if (!ft_strcmp("rrb\n", str))
		reverse_rotate(stack_b);
	else if (!ft_strcmp("pb\n", str))
		pb(stack_a, stack_b);
	else if (!ft_strcmp("pa\n", str))
		pa(stack_a, stack_b);
	else if (!ft_strcmp("sb\n", str))
		swap(stack_b);
	else if (!ft_strcmp("rr\n", str))
		rr(stack_a, stack_b);
	else if (!ft_strcmp("rrr\n", str))
		rrr(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	**args;
	char	*joined;
	char	*str;
	
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
	while (1)
	{
		// printf("HERE\n");
		str = get_next_line(0);
		if (!str)
			break ;
		if (check_ops(str))
		{
			free(str);
			printf("ERROR\n");
			exit(1);
		}
		exec_ops(stack_a, stack_b, str);
		// free(str);
	}
	if (ft_sorted(*stack_a) && !*stack_b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_alloc(stack_a, stack_b, args);
	return (0);
}

//	Parse args
//
//	Fill Stack