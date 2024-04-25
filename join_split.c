#include "push_swap.h"

char	**join_split(char *joined, char **argv)
{
	int		i;
	char	**args;

	args = NULL;
	i = 1;
	joined = ft_strdup(argv[i++]);
	joined = ft_join (joined, ft_strdup(" "));
	while (argv[i])
	{
		joined = ft_join(joined, ft_join(ft_strdup(argv[i]), ft_strdup(" ")));
		i++;
	}
	args = ft_split(joined, ' ');
	ft_free(&joined);
	return (args);
}
