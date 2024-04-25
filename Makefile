NAME = push_swap

libft = libft.a

CC = cc

CFLAGS = -Werror -Wall -Wextra #-g3 -fsanitize=address

SRCS = ft_lstadd_back.c ft_lstsize.c ft_rr.c ft_swap.c find_middle.c  ft_lstadd_front.c \
ft_pa.c ft_rrr.c ft_lstclear.c ft_parse.c ft_sort_few.c ft_filler.c ft_lstdelone.c ft_pb.c \
ft_sorted.c main.c ft_finder.c ft_lstlast.c ft_reverse_rotate.c print_list.c ft_lstnew.c \
ft_rotate.c ft_ss.c push_swap.c get_min.c join_split.c the_sort.c pushorrotate.c

OBJS = $(SRCS:.c=.o)

$(libft):
	make -C libft
	cd libft && mv libft.a ../

all: $(NAME)

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