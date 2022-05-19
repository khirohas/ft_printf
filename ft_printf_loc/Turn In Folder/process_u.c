#include "ft_printf.h"

ssize_t	process_u(unsigned int n)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(n, 10, "0123456789", 1);
	return (len);
}
