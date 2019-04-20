/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:28:07 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 18:08:06 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*ft_btree_create_node(void *content, size_t content_size)
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
