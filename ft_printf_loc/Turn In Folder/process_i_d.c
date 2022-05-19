#include "ft_printf.h"

ssize_t	process_i_d(int	i)
{
	ssize_t	len;

	len = ft_putnbr_ret_count(i, 10, "0123456789");
	return (len);
}
