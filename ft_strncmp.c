/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:36:55 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 19:50:27 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*u1;
	unsigned char	*u2;

	if (n == 0)
		return (0);
	u1 = (unsigned char*)s1;
	u2 = (unsigned char*)s2;
	while (n > 1 && *u1 && *u2 && *u1 == *u2)
	{
		u1++;
		u2++;
		n--;
	}
	return (*u1 - *u2);
}
