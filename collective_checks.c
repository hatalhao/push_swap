/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collective_checks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 05:51:45 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 07:10:46 by hatalhao         ###   ########.fr       */
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
			write(2, "Error spaces\n", 14);
			exit (1);
		}
		j = 0;
		i++;
	}
}

void	empty_string(char **args)
{
	int	i;

	i = 0;
	while (args && args[i])
	{
		if (args[i][0] == '\0')
		{
			write(2, "Error empty", 12);
			exit (1);
		}
		i++;
	}
	return ;
}

int collective_checks(char **args)
{
	if (!args)
		return (0);
	white_spaces_only(args);
	empty_string(args);
	return (1);
}