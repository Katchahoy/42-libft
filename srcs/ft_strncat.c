#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest + ft_strlen(dest);
	while (n-- > 0 && *src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}