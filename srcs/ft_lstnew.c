#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*elem;

	if (!(elem = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(elem->content = (void*)malloc(sizeof(content_size))))
		return (NULL);
	ft_memcpy(elem->content, content, content_size);
	elem->content_size = (!content) ? 0 : content_size;
	elem->next = NULL;
	return (elem);
}