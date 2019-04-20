/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:35:42 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 11:18:06 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	char	*p;

	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	p = dest;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (dest);
}
