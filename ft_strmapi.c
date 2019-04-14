/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:36:39 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 16:47:12 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*p;
	unsigned int	i;

	if (!(str = (char*)malloc(sizeof(char) * (1 + ft_strlen(s)))))
		return (NULL);
	p = str;
	i = 0;
	while (*s)
		*p++ = f(i++, *s++);
	*p = '\0';
	return (str);
}
