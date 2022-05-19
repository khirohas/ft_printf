NAME = libftprintf.a

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror #-g3 -fsanitize=address -fsanitize=undefined

SRCS = ft_printf.c ft_printf_utils.c process.c
OBJS	=	${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

#makelibft: $(NAME)
#	cd "$(PWD)/libft" && make


#%.o: %.c
#	$(CC) $(CFLAGS) -c $^ -o $@

#$(NAME): $(OBJS)
#	ar -rcs $(NAME) $(OBJS)


clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
