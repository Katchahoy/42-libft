#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	char	*p;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	p = str;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	return (str);
}