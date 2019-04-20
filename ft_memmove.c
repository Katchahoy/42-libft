/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:33:50 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 13:53:06 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str_in;
	char	*str_out;
	size_t	i;

	str_in = (char*)src;
	str_out = (char*)dest;
	i = 0;
	if (str_in < str_out)
	{
		str_in += n - 1;
		str_out += n - 1;
		while (n-- > 0)
			*str_out-- = *str_in--;
	}
	else if (str_in > str_out)
	{
		while (n-- > 0)
			*str_out++ = *str_in++;
	}
	return (dest);
}
