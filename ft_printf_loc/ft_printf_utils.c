#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

size_t	ft_strlen(char const *str)
{
	size_t	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

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

ssize_t	ft_putnbr_ret_count(long long n, const unsigned int base, char *base_set, int fd)
{
	unsigned long long		nb;
	unsigned long long		exp;
	ssize_t					count;

	nb = ft_putneg_fd(n, fd);
	count = 0;
	if (n < 0)
		count = 1;
	exp = 1;
	while (exp <= nb / base)
		exp *= base;
	while (exp > 0)
	{
		ft_putchar_fd(base_set[nb / exp % base], fd);
		exp /= base;
		count++;
	}
	return (count);
}

ssize_t	ft_putnbr_ret_count_ulong(unsigned long long n, const unsigned int base, char *base_set, int fd)
{
	unsigned long long		nb;
	unsigned long long		exp;
	ssize_t					count;

	nb = n;
	count = 0;
	exp = 1;
	while (exp <= nb / base)
		exp *= base;
	while (exp > 0)
	{
		ft_putchar_fd(base_set[nb / exp % base], fd);
		exp /= base;
		count++;
	}
	return (count);
}
