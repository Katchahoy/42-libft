#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	nb;

	nb = n < 0 ? -n : n;
	if (n < 0)
		ft_putchar('-');
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}