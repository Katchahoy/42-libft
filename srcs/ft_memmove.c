#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *str_in;
    unsigned char   *str_out;
    unsigned char   *tmp;
    size_t  i;

    str_in = (unsigned char*)src;
    str_out = (unsigned char*)dest;
    if (!(tmp = (unsigned char*)malloc(sizeof(unsigned char) * n)))
        return (NULL);
    i = 0;
    while (i++ < n)
        *tmp++ = *str_in++;
    i = 0;
    while (i++ < n)
        *str_out++ = *tmp++;
    free(tmp);
    return (str_out);
}