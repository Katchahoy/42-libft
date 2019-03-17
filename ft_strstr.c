#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*s1;
	const char	*s2;
	const char	*s3;

	if (!*to_find)
		return ((char*)str);
	s1 = str;
	while (*s1)
	{
		s2 = s1;
		s3 = to_find;
		while (*s2 && *s3 && *s2 == *s3)
		{
			s2++;
			s3++;
		}
		if (*s3 == '\0')
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}