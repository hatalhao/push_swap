/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:27:09 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 09:27:10 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**join_split(char *joined, char **argv)
{
	int		i;
	char	**args;

	args = NULL;
	i = 0;
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
