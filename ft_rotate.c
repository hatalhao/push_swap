/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:31:06 by hatalhao          #+#    #+#             */
/*   Updated: 2024/03/30 02:39:56 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stackb, char *str)
{
	t_list	*head;
	t_list	*iter;

	if (!*stackb || !stackb)
		return ;
	head = *stackb;
	*stackb = (*stackb)->next;
	head->next = NULL;
	iter = *stackb;
	while (iter)
	{
		if (!(iter->next))
			ft_lstadd_back(stackb, head);
		iter = iter->next;
	}
	if (str)
		printf("%s\n", str);
}
