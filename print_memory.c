/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 12:48:35 by exam              #+#    #+#             */
/*   Updated: 2019/04/14 17:27:14 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_hex(unsigned char c)
{
	char	c1;
	char	c2;

	c2 = (c / 16 < 10) ? c / 16 + '0' : c / 16 + 'a' - 10;
	c1 = (c % 16 < 10) ? c % 16 + '0' : c % 16 + 'a' - 10;
	write(1, &c2, 1);
	write(1, &c1, 1);
}

static void	print_char(unsigned char c)
{
	if (c < ' ' || c > '~')
		c = '.';
	write(1, &c, 1);
}

void		print_memory_hex(unsigned char *k, size_t size, size_t i)
{
	size_t	j;

	j = i;
	while (j < i + 16)
	{
		if (j >= size)
			write(1, "  ", 2);
		else
			print_hex(k[j]);
		j++;
		if (j % 2 == 0)
			write(1, " ", 1);
	}
}

void		print_memory_char(unsigned char *k, size_t size, size_t i)
{
	size_t	j;

	j = i;
	while (j < i + 16)
	{
		if (j >= size)
		{
			write(1, "\n", 1);
			break ;
		}
		else
			print_char(k[j]);
		j++;
		if (j % 16 == 0)
			write(1, "\n", 1);
	}
}

void		print_memory(const void *addr, size_t size)
{
	size_t			i;
	unsigned char	*k;

	k = (unsigned char*)addr;
	i = 0;
	while (i < size)
	{
		print_memory_hex(k, size, i);
		print_memory_char(k, size, i);
		i += 16;
	}
}
