#include "ft_printf.h"

ssize_t	process_c(int c)
{
	ft_putchar_fd((char)c, 1);
	return (1);
}
