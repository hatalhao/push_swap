/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:13 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 13:23:12 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	white_spaces_only(char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!arg)
		return ;
	i = 0;
	while (arg[i])
	{
		while ((arg[i][j] >= 9 && arg[i][j] <= 13) || arg[i][j] == 32)
			j++;
		if (arg[i][j] == '\0')
		{
			write(2, "Error", 5);
			exit (1);
		}
		j = 0;
		i++;
	}
}

void	print_error(char **args)
{
	free_args(args);
	write(2, "Error\n", 6);
	exit(1);
}

int	isduplicate(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args && args[i])
	{
		j = i + 1;
		while (args && args[j])
		{
			if (ft_atoi_prime(args[i], args) == ft_atoi_prime(args[j], args))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check(char const *nptr)
{
	int	i;

	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	if (nptr[i] == '\0')
		return (0);
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_parse(int argc, char **args)
{
	int		i;
	char	*joined;

	i = 0;
	joined = NULL;
	if (argc == 2)
	{
		white_spaces_only(args);
		args = ft_split(*args, ' ');
		if (ft_atoi_prime(args[0], args) || ft_check(args[0]))
			print_error(args);
	}
	else if (argc > 2)
	{
		white_spaces_only(args);
		args = join_split(joined, args);
		ft_free(&joined);
	}
	while (args && args[i])
	{
		if (!(ft_check(args[i])) || !(isduplicate(args)))
			print_error(args);
		i++;
	}
	free_args(args);
}
