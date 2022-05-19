#include "ft_printf.h"

size_t ft_output (const char *format, va_list ap){

	size_t i;
	size_t count;

	i = 0;
	count = 0;
	errno = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
			i++;
		}
		if (format[i] == '%' && format[i + 1] == 'c')
			count += process_c(va_arg(ap, int));
		if (format[i] == '%' && format[i + 1] == 's')
			count += process_s(va_arg(ap, char *));
		if (format[i] == '%' && format[i + 1] == 'p')
			count += process_p(va_arg(ap, void *));
		if (format[i] == '%' && (format[i + 1] == 'i' || format[i + 1] == 'd'))
			count += process_i_d(va_arg(ap, int));
		if (format[i] == '%' && format[i + 1] == 'u')
			count += process_u(va_arg(ap, unsigned int));
		if (format[i] == '%' && format[i + 1] == 'x')
			count += process_x(va_arg(ap, unsigned int));
		if (format[i] == '%' && format[i + 1] == 'X')
			count += process_X(va_arg(ap, unsigned int));
		if (format[i] == '%' && format[i + 1] == '%')
			count += process_perc();
		if (format[i] == '%')
		{
			if (errno != 0)
				return (-1);
			else
				i = i + 2;
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	ssize_t	count;

	va_start(ap, format);
	count = ft_output(format, ap);
	va_end(ap);
	return ((int)count);
}


