/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:35:17 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 09:55:45 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int q)
{
	char	c;

	c = (char)q;
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	if (c == '\0')
		return ((char*)s);
	return (NULL);
}
