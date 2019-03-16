#include "libft.h"

size_t	ft_strlen(const char *str)
{
	char	*p;

	p = (char*)str;
	while (*p)
		p++;
	return (p - str);
}