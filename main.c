#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	*joined;
	char	**args;
	int		i;

	joined = NULL;
	i = 1;
	if (argc < 2)
		return (-1);
	ft_parse(argc, argv);
	stack_a = (t_list **) malloc (sizeof(t_list));
	stack_b = (t_list **) malloc (sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	args = join_split(joined, argv);
	ft_filler(stack_a, args);
	if (ft_sorted(*stack_a))
	{
		ft_lstclear(stack_a);
		free(stack_b);
		return (0);
	}
	if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 5)
		the_sort(stack_a, stack_b, args, ft_lstsize(*stack_a));
	// printf("********************************\n");
	// printf("A\n");
	// print_list(*stack_a);
	// printf("********************************\n");
	// printf("B\n");
	print_list(*stack_b);
	i = 0;
	while (args[i])
		free (args[i++]);
	free (args);
	ft_lstclear(stack_a);
	free(stack_b);
	// system("leaks push_swap");
	return (0);
}
