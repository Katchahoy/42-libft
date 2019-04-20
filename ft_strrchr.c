/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:38:09 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 09:59:06 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int q)
{
	char		*p;
	char		c;
	size_t		len;
	size_t		i;

	c = (char)q;
	len = ft_strlen(s);
	p = (char*)s + len;
	i = 0;
	while (i++ < len + 1)
	{
		if (*p == c)
			return (p);
		p--;
	}
	return (NULL);
}
