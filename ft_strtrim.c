/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:38:33 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/20 09:32:06 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static size_t	ft_strlen_trim(const char *s, size_t len)
{
	size_t		len_trim;
	size_t		i;
	const char	*p;

	p = s + len - 1;
	len_trim = len;
	i = 0;
	while (i++ < len && ft_is_space(*s++))
		len_trim--;
	i = 0;
	if (len_trim <= 0)
		return (0);
	while (i++ < len && ft_is_space(*p--))
		len_trim--;
	return (len_trim);
}

char			*ft_strtrim(const char *s)
{
	size_t	len_trim;
	size_t	len;
	size_t	i;
	char	*ret;
	char	*ret_0;

	len = ft_strlen(s);
	len_trim = ft_strlen_trim(s, len);
	if (!(ret = (char*)malloc(sizeof(char) * (len_trim + 1))))
		return (NULL);
	ret_0 = ret;
	i = 0;
	while (ft_is_space(*s) && ++i < len)
		s++;
	i = 0;
	while (i++ < len_trim)
		*ret++ = *s++;
	*ret = '\0';
	return (ret_0);
}
