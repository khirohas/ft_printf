#include "ft_printf.h"

ssize_t	process_s(char *s)
{
	ssize_t	len;

	if (s == NULL)
		len = ft_putstr_fd_ret_count("(null)", 1);
	else
		len = ft_putstr_fd_ret_count(s, 1);
	return (len);
}
