#include "libft.h"

t_btree		*btree_create_node(void *content, size_t content_size)
{
	t_btree	*new_node;

	if (!(new_node = (t_btree*)malloc(sizeof(t_btree))))
		return (NULL);
	if (!(new_node->content = (void*)malloc(content_size)))
		return (NULL);
	ft_memcpy(new_node->content, content, content_size);
	new_node->content_size = content_size;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}