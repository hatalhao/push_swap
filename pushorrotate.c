#include "push_swap.h"

int get_max(t_list *stack)
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

int get_index(t_list *stack, int max)
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

int within_range(int *arr, int start, int end, int number)
{
	int	i;
	
	i = start;
	while (i < end)
	{
		if (arr[i] == number)
			return (0);
		i++;
	}
	return  (1);
}

void	action(t_list **stack_a, t_list **stack_b, int *arr, int size)
{
	int	start;
	int	end;
	
	start = 0;
	end = ft_ranger(size);
	while (*stack_a && start < size )
	{
		if (*stack_a && (*stack_a)->nbr < arr[start])
		{
			ft_pb(stack_a, stack_b);
			ft_rotate(stack_b, "rb");
			start++;
			if (end < size)
				end++;
		}
		else if (!within_range(arr, start, end, (*stack_a)->nbr))
		{
			ft_pb(stack_a, stack_b);
			start++;
			if (end < size)
					end++;
		}
		else
		
			ft_rotate(stack_a, "ra");
	}
}

int		ft_ranger(int size)
{
	if (size > 5 && size <= 16)
		return (3);
	else if (size <= 100)
		return (15);
	else if (size <= 500)
		return (35);
	else
		return (45);
}

void	refill_stack_a(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b)
	{
		if (get_max(*stack_b) == (*stack_b)->nbr)
				ft_pa(stack_a, stack_b);
		else if ((((*stack_b)->next) && get_max(*stack_b) == (*stack_b)->next->nbr))
			ft_swap(stack_b, "sb");
		else if ((get_index((*stack_b), get_max(*stack_b))) < ft_lstsize(*stack_b) / 2)
			ft_rotate(stack_b, "rb");
		else
			ft_reverse_rotate(stack_b, "rrb");	
	}
}

void	pushorrotate(t_list **stack_a, t_list **stack_b, int *arr, int size)
{
	action(stack_a, stack_b, arr, size);
	refill_stack_a(stack_a, stack_b);
}
