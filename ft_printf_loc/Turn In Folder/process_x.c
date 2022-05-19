#include "ft_printf.h"

ssize_t	process_x(unsigned int n)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(n, 16, "0123456789abcdef", 1);
	return (len);
}
