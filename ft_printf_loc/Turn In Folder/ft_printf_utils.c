#include "ft_printf.h"

ssize_t	ft_putstr_fd_ret_count(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return (-1);
	len = ft_strlen(s);
	while (len > INT_MAX)
	{
		write(fd, s, INT_MAX);
		s += INT_MAX;
		len -= INT_MAX;
	}
	if (write(fd, s, len) < 0)
		return (-1);
	else
		return (len);
}

static unsigned long long	ft_putneg_fd(long long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		return (-n);
	}
	return (n);
}

ssize_t	ft_putnbr_ret_count(long long n, const unsigned int b, char *bs)
{
	unsigned long long		nb;
	unsigned long long		exp;
	ssize_t					count;

	nb = ft_putneg_fd(n, 1);
	count = 0;
	if (n < 0)
		count = 1;
	exp = 1;
	while (exp <= nb / b)
		exp *= b;
	while (exp > 0)
	{
		ft_putchar_fd(bs[nb / exp % b], 1);
		exp /= b;
		count++;
	}
	return (count);
}

ssize_t	ft_putulong(unsigned long long n, const unsigned int b, char *bs)
{
	unsigned long long		nb;
	unsigned long long		exp;
	ssize_t					count;

	nb = n;
	count = 0;
	exp = 1;
	while (exp <= nb / b)
		exp *= b;
	while (exp > 0)
	{
		ft_putchar_fd(bs[nb / exp % b], 1);
		exp /= b;
		count++;
	}
	return (count);
}
