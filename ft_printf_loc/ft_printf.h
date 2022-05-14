#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <errno.h>
//# include "libft.h"

int	ft_printf(const char *, ...);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(char const *str);
ssize_t	ft_putstr_fd_ret_count(char *s, int fd);
//unsigned long long	ft_putneg_fd(long long n, int fd);
ssize_t	ft_putnbr_ret_count_ulong(unsigned long long n, const unsigned int base, char *base_set, int fd);
ssize_t	ft_putnbr_ret_count(long long n, const unsigned int base, char *base_set, int fd);
ssize_t		process_c(int c);
ssize_t		process_s(char *s);
ssize_t		process_p(void *p);
ssize_t		process_i_d(int	i);
ssize_t		process_u(unsigned int n);
ssize_t		process_x(unsigned int n);
ssize_t		process_X(unsigned int n);

#endif
