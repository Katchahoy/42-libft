/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:26:56 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 14:33:59 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\f'
		|| c == '\t'
		|| c == '\r'
		|| c == '\v');
}

static int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

int			ft_atoi(const char *str)
{
	char	sign;
	long	nb;

	if (!str)
		return (0);
	nb = 0;
	while (ft_isspace(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (ft_issign(*str))
		str++;
	while (ft_isdigit(*str))
		nb = nb * 10 + *str++ - '0';
	return (int)(sign < 0 ? -nb : nb);
}
