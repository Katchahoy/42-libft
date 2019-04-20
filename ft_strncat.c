/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:36:49 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 16:36:50 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest + ft_strlen(dest);
	while (n-- > 0 && *src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
