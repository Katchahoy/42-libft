/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:33:40 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 17:06:43 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str_in;
	unsigned char	*str_out;

	if (!src)
		dest = NULL;
	else
	{
		str_in = (unsigned char*)src;
		str_out = (unsigned char*)dest;
		while (n-- > 0)
			*str_out++ = *str_in++;
	}
	return (dest);
}
