#include "ft_printf.h"

ssize_t	process_capitalx(unsigned int n)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(n, 16, "0123456789ABCDEF");
	return (len);
}
