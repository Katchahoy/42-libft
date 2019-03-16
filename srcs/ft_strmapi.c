#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*p;
	unsigned int	i;

	if (!(str = (char*)malloc(sizeof(char) * (1 + ft_strlen(s)))))
		return (NULL);
	p = str;
	i = 0;
	while (*s)
		*p++ = f(i++, *s++);
	return (str);
}