/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:13 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/29 00:27:27 by hatalhao         ###   ########.fr       */
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
			write(2, "Error\n", 6);
			exit (1);
		}
		j = 0;
		i++;
	}
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
			return (0);
		i++;
	}
	return (1);
}

void	single_arg_check(char **args)
{
	int	i;

	i = 0;
	white_spaces_only(args);
	args = ft_split(*args, ' ');
	while (args[i])
	{
		ft_atoi_prime(args[i], args);
		if (!ft_check(args[i]))
			print_error(args);
		i++;
	}
	free_args(args);
}

void	ft_parse(int argc, char **args)
{
	int		i;
	char	*joined;

	i = 0;
	joined = NULL;
	if (argc == 2)
	{
		single_arg_check(args);
		args = ft_split(*args, ' ');
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
