/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:36:31 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 16:49:11 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	char	*p;

	if (!(str = (char*)malloc(sizeof(char) * (1 + ft_strlen(s)))))
		return (NULL);
	p = str;
	while (*s)
		*p++ = f(*s++);
	*p = '\0';
	return (str);
}
