/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:32:58 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 17:12:01 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*elem;
	t_list	*tmp;

	new_lst = NULL;
	tmp = new_lst;
	while (lst)
	{
		if (!(elem = ft_lstnew((const void*)lst->content, lst->content_size)))
			return (NULL);
		if (!new_lst)
		{
			new_lst = f(elem);
			tmp = new_lst;
		}
		else
		{
			tmp->next = f(elem);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	tmp->next = NULL;
	return (new_lst);
}
