/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 07:06:21 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 07:10:50 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isnumber(char const *arg)
{
	int	i;

	i = 0;
	if (!arg)
		return (0);
	while (arg[i] >= '0' && arg[i] <= '9')
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_prime(char const *nptr, char **args)
{
	int					i;
	int					s;
	long				r;

	i = 0;
	s = 1;
	r = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10 + nptr[i++] - '0';
		if (r > INT_MAX || (r * s) < INT_MIN)
		{
			free_args(args);
			write(2, "Error Prime\n", 13);
			exit (1);
		}
	}
	return ((int)(r * s));
}
