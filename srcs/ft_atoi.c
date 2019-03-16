#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\f'
		|| c == '\t'
		|| c == '\r'
		|| c == '\v');
}

static int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

int			ft_atoi(char *str)
{
	int		sign;
	int		nb;

	if (!str)
		return (0);
	nb = 0;
	while (ft_isspace(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (ft_issign(*str))
		str++;
	while (ft_isdigit(*str))
		nb = nb * 10 + *str++ - '0';
	return (nb * sign);
}