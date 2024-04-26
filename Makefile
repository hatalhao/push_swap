NAME = push_swap

libft = libft.a

CC = cc

CFLAGS = -Werror -Wall -Wextra #-g3 -fsanitize=address

SRCS = ft_lstadd_back.c ft_lstsize.c ft_rr.c ft_swap.c ft_lstadd_front.c ft_atoi_prime.c \
ft_pa.c ft_rrr.c ft_lstclear.c ft_parse.c ft_sort_few.c ft_filler.c ft_lstdelone.c ft_pb.c \
ft_sorted.c main.c ft_lstlast.c ft_reverse_rotate.c print_list.c ft_lstnew.c \
ft_rotate.c ft_ss.c get_min.c join_split.c the_sort.c stacks_fill.c free_args.c \


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(libft):
	make -C libft
	cd libft && mv libft.a ../

$(NAME): $(OBJS) $(libft)
		$(CC) $(CFLAGS) $(OBJS) $(libft) -o $(NAME)

.PHONY: all clean fclean re

clean:
		rm -rf $(OBJS)
		make -C libft clean

fclean: clean
		rm -rf $(NAME) libft.a
		make -C libft fclean

re:	fclean all

.SECONDARY: $(OBJS)