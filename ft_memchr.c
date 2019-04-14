/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:33:28 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 17:09:44 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	u;
	size_t			i;

	p = (unsigned char*)s;
	u = (unsigned char)c;
	i = 0;
	while (i++ < n)
	{
		if (*p == u)
			return (p);
	}
	return (NULL);
}
