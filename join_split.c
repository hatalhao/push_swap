/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:27:09 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 23:24:35 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**join_split(char *joined, char **args)
{
	int		i;

	i = 0;
	joined = ft_strdup(args[i++]);
	joined = ft_join (joined, ft_strdup(" "));
	while (args && args[i])
	{
		joined = ft_join(joined, ft_join(ft_strdup(args[i]), ft_strdup(" ")));
		i++;
	}
	args = ft_split(joined, ' ');
	ft_free(&joined);
	return (args);
}
