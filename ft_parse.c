/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:13 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/23 02:48:09 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isduplicate(char **args)
{
	int	i;
	int j;

	i = 1;
	j = i + 1;
	while (args[i])
	{
		while(args[j])
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int checker(char const *nptr)
{
	int i;

	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	if (!nptr[i])
		return (0);
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')

			return (0);
		i++;
	}
	return (1);
}

void	ft_parse(int argc, char **argv)
{
	int		i;
	char	**args;
	char	*joined;

	joined = NULL;
	args = argv;
	i = 1;
	if (!args[i] || argc < 2)
	{
		write(2, "Error 00\n", 10);
		exit (0);
	}
	else if (argc == 2)
	{
		args = ft_split(args[i], ' ');
		i = 0;
	}
	else if (argc > 2)
	{
		args = join_split(joined, argv + 1);
		ft_free (&joined);
	}
	while (args[i])
	{
		if (!(checker(args[i])) || !(isduplicate(argv)))
		{
			while ((args[i]))
			{
				if (!(args[i]))
					break ;
				free (args[i--]);
			}
			free (args);
			write(2, "Error 11\n", 10);
			exit (1);
		}
		i++;
	}
	i--;
	if (args)
	{
		while (args[i] && i > 0)
		{
			if (!(args[i]))
				break ;
			free (args[i--]);
		}
		free (args);
	}
	// printf("PARSING ENDED\n");
}
