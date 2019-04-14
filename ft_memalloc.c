/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:33:10 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 17:04:33 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
