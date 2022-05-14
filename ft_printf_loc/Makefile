NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address -fsanitize=undefined

SRCS = ft_printf.c ft_printf_utils.c process.c
OBJS	=	${SRCS:.c=.o}

.PHONY: all
all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
