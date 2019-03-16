#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*p;

	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	p = str;
	while (size-- >= 0)
		*p++ = '\0';
	return (str);
}