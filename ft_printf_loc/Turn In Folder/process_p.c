#include "ft_printf.h"

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
