#include "libft.h"

char	*strcat(char *dest, const char *src)
{
	char	*p;

	p = dest + ft_strlen(dest);
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}