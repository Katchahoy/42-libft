#include "libft.h"

void	bzero(void *s, size_t n)
{
	char	*p;

	p = (char*)s;
	while (n-- > 0)
		*p++ = '\0';
}