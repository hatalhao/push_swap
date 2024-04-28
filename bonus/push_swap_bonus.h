/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:30:36 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/28 10:53:00 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../push_swap.h"

void	swap(t_list **first);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ss(t_list **first_a, t_list **first_b);
void	reverse_rotate(t_list **stack);
void	rotate(t_list **stack);
void	rr(t_list **stacka, t_list **stackb);
void	rrr(t_list **stacka, t_list **stackb);

void	exec_ops(t_list **stack_a, t_list **stack_b, char *str);

int		check_ops(char *str);

#endif