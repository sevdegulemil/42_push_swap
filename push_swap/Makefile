SRCS =	main.c \
		2_3_4_5_arg_sort.c \
		create_stack.c \
		flag_assign.c \
		push_operations.c \
		radix_sort.c \
		reverse_rotate_operations.c \
		rotate_operations.c \
		sorting.c \
		swap_operations.c 


OBJS = $(SRCS:.c=.o)

CC = gcc -g

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a push_swap.a
	ar rcs push_swap.a $(OBJS)
	gcc push_swap.a -o $(NAME)
	$(RM) push_swap.a

clean:
	make clean -C libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re