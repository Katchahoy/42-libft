/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:38:23 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 16:38:24 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*s1;
	const char	*s2;
	const char	*s3;

	if (!*to_find)
		return ((char*)str);
	s1 = str;
	while (*s1)
	{
		s2 = s1;
		s3 = to_find;
		while (*s2 && *s3 && *s2 == *s3)
		{
			s2++;
			s3++;
		}
		if (*s3 == '\0')
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
