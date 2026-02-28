NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbr_base.c ft_putchar.c ft_strlen.c ft_print_int.c ft_print_ptr.c ft_print_str.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

$(NAME): ${OBJS}
	ar rcs $@ $^

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL := all
