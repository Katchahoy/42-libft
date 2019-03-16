#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*p;

	p = dest;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}