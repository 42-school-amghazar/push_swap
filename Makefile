NAME = push_swap
LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c push_swap.c merge_sort.c set_sorted_indexes.c error_handle.c duplicates.c indexing.c parse_arg.c pa_pb.c ra_rb_rr.c rra_rrb_rrr.c helpers.c \
		ft_printf.c print_arg.c \
       get_letter.c print_char.c print_string.c print_integer.c print_unsigned_integer.c  print_hex.c print_pointer.c print_percent.c utoa.c
OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	cc $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
