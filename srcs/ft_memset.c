#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	u;

	p = (unsigned char*)s;
	u = (unsigned char)c;
	while (n-- > 0)
		*p++ = u;
	return (s);
}