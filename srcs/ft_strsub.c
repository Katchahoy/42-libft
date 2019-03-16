#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	char	*p;

	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	s += start;
	p = str;
	while (len-- > 0)
		*p++ = *s++;
	*p = '\0';
	return (str);
}