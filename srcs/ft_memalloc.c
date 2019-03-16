#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*p;
	unsigned char	*ret;

	if (!(ret = (unsigned char*)malloc(size)))
		return (NULL);
	p = ret;
	while (size-- > 0)
		*p++ = 0;
	return (ret);
}