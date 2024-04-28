NAME = push_swap

libft = libft.a

BONUS = checker

CC = gcc

CFLAGS = -Werror -Wall -Wextra

SRCS = ft_lstadd_back.c ft_lstsize.c ft_lstadd_front.c ft_atoi_prime.c \
ops.c ft_lstclear.c ft_parse.c ft_sort_few.c ft_filler.c ft_lstdelone.c \
ft_sorted.c push_swap.c main.c ft_lstlast.c print_list.c ft_lstnew.c getters.c rotates.c \
join_split.c the_sort.c stacks_fill.c free_args.c \

SRCS_BONUS = ft_lstadd_back.c ft_lstsize.c ft_lstadd_front.c ft_atoi_prime.c \
ops.c ft_lstclear.c ft_parse.c ft_sort_few.c ft_filler.c ft_lstdelone.c \
ft_sorted.c ft_lstlast.c push_swap.c print_list.c ft_lstnew.c getters.c rotates.c \
join_split.c the_sort.c stacks_fill.c free_args.c \
bonus/operations.c bonus/checker.c bonus/rots.c \

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

bonus: $(BONUS)

$(BONUS): $(OBJS_BONUS) $(libft)
		$(CC) $(CFLAGS) $(OBJS_BONUS) $(libft) -o $(BONUS)

$(libft):
	make -C libft
	cd libft && mv libft.a ../

$(NAME): $(OBJS) $(libft)
		$(CC) $(CFLAGS) $(OBJS) $(libft) -o $(NAME)

.PHONY: all bonus clean fclean re

clean:
		rm -rf $(OBJS) $(OBJS_BONUS)
		make -C libft clean

fclean: clean
		rm -rf $(NAME) $(BONUS) libft.a
		make -C libft fclean

re:	fclean all

.SECONDARY: $(OBJS) $(OBJS_BONUS)