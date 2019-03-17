#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*s2;
	const char	*s3;
	size_t		i;
	size_t		j;

	if (!*to_find)
		return ((char*)str);
	i = len;
	while (*str && i-- > 0)
	{
		s2 = str;
		s3 = to_find;
		j = i + 1;
		while (*s2 && *s3 && *s2 == *s3 && j-- > 0)
		{
			s2++;
			s3++;
		}
		if (*s3 == '\0')
			return ((char*)str);
		str++;
	}
	return (NULL);
}