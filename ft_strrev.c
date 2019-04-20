/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 19:06:24 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 19:14:12 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap(char *c1, char *c2)
{
	char	tmp;

	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

char		*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	while (i < j)
		ft_swap(&str[i++], &str[j--]);
	return (str);
}
