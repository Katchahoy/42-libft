/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:35:29 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 19:33:24 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char*)s1;
	u2 = (unsigned char*)s2;
	while (*u1 && *u2 && *u1 == *u2)
	{
		u1++;
		u2++;
	}
	return (*u1 - *u2);
}
