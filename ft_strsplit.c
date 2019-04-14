/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:38:17 by scarpent          #+#    #+#             */
/*   Updated: 2019/04/14 16:40:23 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static size_t	ft_len_first_word(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

static char		*ft_strdup_first(const char *s, char c, size_t len)
{
	char	*str;
	char	*p;

	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	p = str;
	while (*s && *s != c)
		*p++ = *s++;
	*p = '\0';
	return (str);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**tab;
	char	**p;
	int		nb_words;
	int		i;
	size_t	word_len;

	nb_words = ft_count_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_words + 1))))
		return (NULL);
	p = tab;
	i = 0;
	while (i++ < nb_words)
	{
		while (*s == c)
			s++;
		word_len = ft_len_first_word(s, c);
		if (!(*p = ft_strdup_first(s, c, word_len)))
			return (NULL);
		s += word_len;
		p++;
	}
	*p = NULL;
	return (tab);
}
