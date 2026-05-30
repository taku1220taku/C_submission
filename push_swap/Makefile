NAME = push_swap

SRCS = main.c algo.c input_utils.c algo_utils.c methods_utils.c push_ab.c rotate_ab.c reverse_rotate_ab.c swap_ab.c ft_atoi.c sort_for_small.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

$(NAME): ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
