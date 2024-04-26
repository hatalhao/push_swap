/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 07:37:41 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/17 21:49:23 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	while (*lst && (*lst)->next)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	free(*lst);
	free(lst);
}
