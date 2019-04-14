/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:33:50 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 17:02:15 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str_in;
	unsigned char	*str_out;
	unsigned char	*tmp;
	size_t			i;

	str_in = (unsigned char*)src;
	str_out = (unsigned char*)dest;
	if (!(tmp = (unsigned char*)malloc(sizeof(unsigned char) * n)))
		return (NULL);
	i = 0;
	while (i++ < n)
		*tmp++ = *str_in++;
	i = 0;
	while (i++ < n)
		*str_out++ = *tmp++;
	free(tmp);
	return (str_out);
}
