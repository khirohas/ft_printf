NAME = libftprintf.a

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror #-g3 -fsanitize=address -fsanitize=undefined

SRCS = ft_printf.c ft_printf_utils.c process_c.c process_i_d.c process_p.c process_perc.c process_s.c process_u.c process_x.c process_X.c
OBJS	=	${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
