#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char			c_arg = 'c';
	char			*s_arg = NULL;
	void			*p_arg = s_arg;
	int				d_arg = -42;
	int				i_arg = -42;
	unsigned int	u_arg = 88;
	unsigned int	x_arg = 42;
	unsigned int	X_arg = 42;

	//char	*second_arg = "piyo";
	//int count = ft_printf("piyo"); // the expected output is "hoge".
	//int count = ft_printf("piyo, %c, %s, %p, %i, %d, %u, %x, %X, %%",c_arg, s_arg, p_arg, i_arg, d_arg, u_arg, x_arg, X_arg, perc_arg); // the expected output is "piyoc"(count:5).
	int count = printf("piyo, %c, poyp, %s, %p, %i, %d, %u, %x, %X, %%\n",c_arg, s_arg, p_arg, i_arg, d_arg, u_arg, x_arg, X_arg);
	int ft_count = ft_printf("piyo, %c, poyp, %s, %p, %i, %d, %u, %x, %X, %%\n",c_arg, s_arg, p_arg, i_arg, d_arg, u_arg, x_arg, X_arg);
	printf ("count:%i\n", count);
	printf ("ft_count:%i\n", ft_count);
}
