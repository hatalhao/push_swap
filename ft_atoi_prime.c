/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 07:06:21 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 13:04:13 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	off_bound(long nb, char **args)
{
	// printf("nb == %ld\n", nb);
	if (nb > INT_MAX || nb < INT_MIN)
	{
		free_args(args);
		// write(2, "Error OFF BOUND\n", 17);
		write(2, "Error", 5);
		exit (1);
	}
}

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
		off_bound((r * s), args);
	}
	return ((int)(r * s));
}
