/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:31:09 by hatalhao          #+#    #+#             */
/*   Updated: 2024/03/30 02:31:10 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_list **stacka, t_list **stackb)
{
	if (!*stacka || !stacka || !*stackb || !stackb)
		return ;
	ft_rotate(stacka, NULL);
	ft_rotate(stackb, NULL);
	printf("rr\n");
}
