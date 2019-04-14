/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:32:37 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 17:13:29 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*elem;

	if (!alst)
		return ;
	while (*alst)
	{
		elem = *alst;
		*alst = (*alst)->next;
		ft_lstdelone(&elem, del);
	}
}
