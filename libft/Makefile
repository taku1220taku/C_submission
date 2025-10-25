NAME = libft.a

SRCS = .c
OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -I libft.h -c $< -o $@

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
