/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:37:10 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 16:44:53 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*p;

	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	p = str;
	while (size-- > 0)
		*p++ = '\0';
	*p = '\0';
	return (str);
}
