#include "libft.h"

static int	ft_nb_digits(int n)
{
	int		i;

	i = 1;
	while ((n /= 10) != 0)
		i++;
	return (i);
}

static char	*ft_itoa_nat(char *str, int len, unsigned int n)
{
	char			*p;
	unsigned int	mul;
	unsigned int	i;

	p = str;
	mul = ft_power_int(10, len - 1);
	while (mul > 0)
	{
		i = n / mul;
		*p++ = i + '0';
		n -= mul * i;
		mul /= 10;
	}
	*p = 0;
	return (str);
}

char		*ft_itoa(int n)
{
	char			*str;
	char			*s;
	int				len;
	int				nb_digits;
	unsigned int	nb;

	len = (n < 0) ? 1 : 0;
	nb_digits = ft_nb_digits(n);
	len += nb_digits;
	nb = (n < 0) ? -n : n;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s = str;
	if (n < 0)
	{
		*str = '-';
		s++;
	}
	s = ft_itoa_nat(s, nb_digits, nb);
	return (str);
}