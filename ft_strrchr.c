#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	if (!s)
		return (NULL);
	p = s + ft_strlen(s);
	while (--p >= s)
	{
		if (*p == c)
			return ((char*)p);
	}
	return (NULL);
}