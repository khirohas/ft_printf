#include "ft_printf.h"

ssize_t	process_c(int c)
{
	ft_putchar_fd((char)c, 1);
	return (1);
}

ssize_t	process_s(char *s)
{
	ssize_t	len;

	if (s == NULL)
		len = ft_putstr_fd_ret_count("(null)", 1);
	else
		len = ft_putstr_fd_ret_count(s, 1);
	return (len);
}

ssize_t	process_p(void *p)
{
	ssize_t	len;
	char	*base;

	base = "0123456789abcdef";
	if (p == NULL)
		len = ft_putstr_fd_ret_count("0x0", 1);
	else
	{
		len = ft_putstr_fd_ret_count("0x", 1);
		len += ft_putulong_ret_count((unsigned long long)p, 16, base, 1);
	}
	return (len);
}

ssize_t	process_i_d(int	i)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(i, 10, "0123456789", 1);
	return (len);
}

ssize_t	process_u(unsigned int n)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(n, 10, "0123456789", 1);
	return (len);
}

ssize_t	process_x(unsigned int n)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(n, 16, "0123456789abcdef", 1);
	return (len);
}

ssize_t	process_X(unsigned int n)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(n, 16, "0123456789ABCDEF", 1);
	return (len);
}
