/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 06:48:27 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/25 22:47:52 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **first, char *str)
{
	t_list	*swap;
	t_list	*link;

	if (!*first || !first)
		return ;
	link = NULL;
	if ((*first)->next->next)
		link = (*first)->next->next;
	swap = *first;
	*first = (*first)->next;
	(*first)->next = swap;
	(*first)->next->next = link;
	if (str)
		ft_printf("%s\n", str);
}
