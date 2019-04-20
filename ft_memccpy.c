/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:56:07 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 13:55:07 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_u;
	unsigned char	*src_u;
	unsigned char	u;

	dst_u = (unsigned char*)dst;
	src_u = (unsigned char*)src;
	u = (unsigned char)c;

	while (n-- > 0)
	{
		if (*src_u == u)
		{
			*dst_u = u;
			return (dst_u + 1);
		}
		*dst_u++ = *src_u++;
	}
	return (NULL);
}
