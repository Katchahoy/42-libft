#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest;
	while (n-- > 0 && *src)
		*p++ = *src++;
	while (n-- > 0)
		*p = '\0';
	return (dest);
}