#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	char	*p;

	if (!(str = (char*)malloc(sizeof(char) * (1 + ft_strlen(s)))))
		return (NULL);
	p = str;
	while (*s)
		*p++ = f(*s++);
	*p = '\0';
	return (str);
}