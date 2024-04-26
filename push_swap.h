/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:28:07 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 02:38:06 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_list
{
	int				nbr;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

t_list				*ft_lstnew(int content);
t_list				*ft_lstlast(t_list *lst);

void				print_list(t_list *list);
void				ft_lstclear(t_list **lst);
void				ft_lstdelone(t_list **lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

/*	instructions	*/ 

void				ft_swap(t_list **first, char *str);
void				ft_ss(t_list **firsta, t_list **firstb);

void				ft_pa(t_list **stack_a, t_list **stack_b);
void				ft_pb(t_list **stack_a, t_list **stack_b);

void				ft_rotate(t_list **stack, char *str);
void				ft_rr(t_list **stacka, t_list **stackb);

void				ft_rrr(t_list **stacka, t_list **stackb);
void				ft_reverse_rotate(t_list **stack, char *str);

/*	push_swap functions */

int					ft_ranger(int size);
int					get_min(t_list *list);
int					isduplicate(char **args);
int					checker(char const *nptr);
int					median(int *arr, int half);
int					ft_sorted(t_list *stack_a);

void				sort_three(t_list **stack_a);
void				sort_four(t_list **stack_a, t_list **stack_b);
void				sort_five(t_list **stack_a, t_list **stack_b);

void				free_args(char **args);
void				ft_parse(int argc, char **argv);
void				ft_filler(t_list **stack_a, char **argv);
void				the_sort(t_list **stack_a, t_list **stack_b, char **args,
						int size);
void				pushorrotate(t_list **stack_a, t_list **stack_b, int *ar,
						int size);

char				**join_split(char *joined, char **argv);

#endif