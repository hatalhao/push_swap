/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 07:06:21 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 12:05:02 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_prime(char const *nptr, char **args)
{
	int					i;
	int					s;
	size_t	r;

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
		if ((s == 1 && r > 0x7fffffff) || (s == -1 && r > 0x80000000))
		{
			free_args(args);
			write(2, "Error\n", 7);
			exit (0);
		}
	}
	return ((int)(r * s));
}
