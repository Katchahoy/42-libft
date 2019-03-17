#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	char	*p;

	if (!str || !(dest = (char*)malloc(sizeof(char) * ft_strlen(str))))
		return (NULL);
	p = dest;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (dest);
}