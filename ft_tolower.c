/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:38:38 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 18:03:05 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int			ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 'a' - 'A');
	return (c);
}
