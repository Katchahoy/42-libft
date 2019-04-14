/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:38:28 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 16:44:03 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	char	*p;

	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	s += start;
	p = str;
	while (len-- > 0)
		*p++ = *s++;
	*p = '\0';
	return (str);
}
