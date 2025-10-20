NAME = libft.a

SRCS = *.c
OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

srcs/%.o: srcs/%.c
	${CC} ${CFLAGS} -I includes -c $< -o $@

$(NAME): ${OBJS}
	ar rcs $@ $^

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL := all