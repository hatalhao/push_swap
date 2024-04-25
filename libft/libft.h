/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:16:47 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/19 18:41:55 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include "ft_printf/ft_printf.h"
# include "gnl/get_next_line.h"

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(char const *nptr);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(char const *s1, char const *s2, size_t n);


int     ft_printf(char const *, ...);

char	*get_next_line(int fd);

char	*ft_itoa(int n);
char	*ft_strdup(char const *src);
char	*ft_strchr(char const *s, int c);
char	*ft_strrchr(char const *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(char const *haystack, char const *needle, size_t n);

char	**ft_split(char const *s, char c);

void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlen(char const *str);
size_t	ft_strlcat(char *dest, char const *src, size_t size);
size_t	ft_strlcpy(char *dest, char const *src, size_t size);

//      LINKED LISTS

// typedef	struct		s_list
// {
// 	int				nbr;
// 	struct s_list	*next;
// 	int				*stack_a;
// 	int				*stack_b;
// 	int				marker[];
// }					t_list;


// typedef struct		s_list
// {
// 	int				content;
// 	struct s_list	*next;  
// }					t_list;

// t_list	*ft_lstnew(int content);
// t_list	*ft_lstlast(t_list *lst);

// void	ft_lstdelone(t_list **lst);
// void	ft_lstclear(t_list **lst);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// void	ft_lstadd_front(t_list **lst, t_list *new);

// int		ft_lstsize(t_list *lst);

#endif
