/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:37:00 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 12:05:21 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest;
	while (n-- > 0 && *src)
		*p++ = *src++;
	if (!*src)
	{
		while (n-- > 0)
			*p++ = '\0';
		*p = '\0';
	}
	return (dest);
}
