#include "libft.h"

int		ft_power_int(int n, int p)
{
	int		tmp;

	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	if (p == 1)
		return (n);
	tmp = ft_power_int(n, p / 2);
	tmp *= tmp;
	if (p % 2 == 0)
		return (tmp);
	return (n * tmp);
}