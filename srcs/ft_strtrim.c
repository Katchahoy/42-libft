#include "libft.h"

static int		ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static size_t	ft_strlen_trim(const char *s)
{
	size_t	len;
	size_t	len_trim;
	char	*p;

	len = ft_strlen(s);
	while (ft_is_space(*s++))
		len_trim--;
	
	p = (char*)s + len - 1;
	
	while (ft_is_space(*p))
		;
	return (len_trim);
}

char			*ft_strtrim(const char *s)
{
	ft_strlen_trim(s);
	return (NULL);
}