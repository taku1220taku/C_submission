NAME = libftprintf.a

SRCS =

# B_SRCS =

OBJS = ${SRCS:.c=.o}

# BONUS_OBJS = $(B_SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

$(NAME): ${OBJS}
	ar rcs $@ $^

# bonus: bonus.stamp
# bonus.stamp: ${OBJS} ${BONUS_OBJS}
# 	ar rcs ${NAME} $^
# 	touch $@

clean:
	rm -f ${OBJS} ${BONUS_OBJS} bonus.stamp

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL := all
