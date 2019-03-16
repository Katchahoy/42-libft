#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;	
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (*dst && i++ < size)
		dst++;
	if (*dst)
		return (MIN(dst_len, size) + src_len);
	while (*src && ++i < size)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}