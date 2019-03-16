#include "libft.h"
#include <time.h>
#include <bsd/string.h>

void	print_memory(const void *addr, size_t size);

void	test_strlcat(void)
{
	int		i;
	size_t	j;
	size_t	size;
	size_t	len1;
	size_t	len2;
	size_t	res1;
	size_t	res2;
	char	str1[16];
	char	str2[16];
	char	*str12;
	char	*str22;

	srand(time(NULL));
	i = 0;
	while (++i < 100000)
	{
		len1 = rand() % 8;
		len2 = rand() % 8;
		j = 0;
		while (j < len1)
			str1[j++] = 1 + rand() % 127;
		str1[j] = '\0';
		//ft_putchar('\n');
		//print_memory(str1, ft_strlen(str1));
		j = 0;
		while (j < len2)
			str2[j++] = 1 + rand() % 127;
		str2[j] = '\0';
		//print_memory(str2, ft_strlen(str2));
		str12 = ft_strdup(str1);
		str22 = ft_strdup(str2);
		const char	*s2 = (const char*)str2;
		const char	*s22 = (const char*)str22;
		size = rand() % 16;
		//ft_putstr("attempted: ");
		//ft_putnbr((int)size);
		//ft_putchar('\n');
		res1 = strlcat(str1, s2, size);
		res2 = ft_strlcat(str12, s22, size);
		//ft_putnbr((int)res1);
		//ft_putchar(' ');
		//ft_putnbr((int)res2);
		//ft_putchar('\n');
		if (res1 != res2 || strcmp(str1, str12) != 0)
		{
			ft_putstr("FAIL\n");
			print_memory(str1, ft_strlen(str1));
			print_memory(str12, ft_strlen(str12));
		}
		free(str12);
		free(str22);
	}
}

void	test_strstr(void)
{
	int		i;
	int		j;
	int		len1;
	int		len2;
	char	str1[8];
	char	str2[8];

	srand(time(NULL));
	i = 0;
	while (++i < 200000)
	{
		len1 = rand() % 8;
		len2 = rand() % 8;
		j = 0;
		while (j < len1)
			str1[j++] = 1 + rand() % 127;
		str1[j] = '\0';
		j = 0;
		while (j < len2)
			str2[j++] = 1 + rand() % 127;
		str2[j] = '\0';
		const char	*s1 = (const char*)str1;
		const char	*s2 = (const char*)str2;
		char	*s11 = ft_strstr(s1, s2);
		char	*s22 = strstr(s1, s2);
		if (s11 == 0 && s22 != 0)
		{
			ft_putstr("cas1:\n");
			print_memory(str1, ft_strlen(str1));
			print_memory(str2, ft_strlen(str2));
			print_memory(s22, ft_strlen(s22));
			ft_putchar('\n');
		}
		else if (s11 != 0 && s22 == 0)
		{
			ft_putstr("cas2:\n");
			print_memory(str1, ft_strlen(str1));
			print_memory(str2, ft_strlen(str2));
			print_memory(s11, ft_strlen(s11));
			ft_putchar('\n');
		}
		else if (s11 && s22 && strcmp(s11, s22) != 0)
		{
			ft_putstr("cas3: \n");
			ft_putnbr(ft_strlen(str1));
			ft_putchar(' ');
			ft_putnbr(ft_strlen(str2));
			print_memory(str1, ft_strlen(str1));
			print_memory(str2, ft_strlen(str2));
			if (s11)
				print_memory(s11, ft_strlen(s11));
			if (s22)
				print_memory(s22, ft_strlen(s22));
			ft_putchar('\n');
		}
	}
}

void	test_strnstr(void)
{
	int		i;
	int		j;
	int		len1;
	int		len2;
	size_t	n;
	char	str1[8];
	char	str2[8];

	srand(time(NULL));
	i = 0;
	while (++i < 2000000)
	{
		len1 = rand() % 8;
		len2 = rand() % 8;
		j = 0;
		while (j < len1)
			str1[j++] = 1 + rand() % 127;
		str1[j] = '\0';
		j = 0;
		while (j < len2)
			str2[j++] = 1 + rand() % 127;
		str2[j] = '\0';
		const char	*s1 = (const char*)str1;
		const char	*s2 = (const char*)str2;
		n = rand() % 8;
		char	*s11 = ft_strnstr(s1, s2, n);
		char	*s22 = strnstr(s1, s2, n);
		if (s11 == 0 && s22 != 0)
		{
			ft_putstr("cas1:\n");
			print_memory(str1, ft_strlen(str1));
			print_memory(str2, ft_strlen(str2));
			print_memory(s22, ft_strlen(s22));
			ft_putchar('\n');
		}
		else if (s11 != 0 && s22 == 0)
		{
			ft_putstr("cas2: n=");
			ft_putnbr((int)n);
			ft_putchar('\n');
			print_memory(str1, ft_strlen(str1));
			print_memory(str2, ft_strlen(str2));
			print_memory(s11, ft_strlen(s11));
			ft_putchar('\n');
		}
		else if (s11 && s22 && strcmp(s11, s22) != 0)
		{
			ft_putstr("cas3: \n");
			ft_putnbr(ft_strlen(str1));
			ft_putchar(' ');
			ft_putnbr(ft_strlen(str2));
			print_memory(str1, ft_strlen(str1));
			print_memory(str2, ft_strlen(str2));
			if (s11)
				print_memory(s11, ft_strlen(s11));
			if (s22)
				print_memory(s22, ft_strlen(s22));
			ft_putchar('\n');
		}
	}
}

t_list	*div2(t_list *elem)
{
	char	*str;

	if ((elem) && (elem->content))
	{
		str = (char*)elem->content;
		str[0] = 'Q';
	}
	return (elem);
}

void	print(t_list *elem)
{
	char	*str;

	if ((elem) && (elem->content))
	{
		str = (char*)elem->content;
		write(1, str, elem->content_size);
		ft_putchar('\n');
	}
}

void	del(void *content, size_t size)
{
	free(content);
	(void)size;
}

void	test_lstmap(int ac, char **av)
{
	if (ac == 4)
	{
		t_list	*lst1;
		t_list	*lst2;
		t_list	*lst3;
		t_list	*lst_res;

		lst1 = ft_lstnew(av[1], 1 + ft_strlen(av[1]));
		lst2 = ft_lstnew(av[2], 1 + ft_strlen(av[2]));
		lst3 = ft_lstnew(av[3], 1 + ft_strlen(av[3]));
		ft_lstadd(&lst1, lst2);
		ft_lstadd(&lst1, lst3);
		ft_lstiter(lst1, &print);
		ft_putchar('\n');
		lst_res = ft_lstmap(lst1, &div2);
		ft_lstiter(lst_res, &print);
		ft_lstdel(&lst1, &del);
		ft_lstdel(&lst_res, &del);
	}
}

void	test_itoa(int ac, char **av)
{
	int		nb;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		ft_putstr(ft_itoa(nb));
	}
}

void	test_power(int ac, char **av)
{
	int		n;
	int		p;

	if (ac == 3)
	{
		n = atoi(av[1]);
		p = atoi(av[2]);
		ft_putnbr(ft_power_int(n, p));
	}
}

void	test_strsplit(int ac, char **av)
{
	char	*s;
	char	c;
	char	**tab;

	if (ac == 3)
	{
		s = av[1];
		c = av[2][0];
		//ft_putnbr(ft_count_words(s, c));
		tab = ft_strsplit(s, c);
		while (*tab)
		{
			ft_putstr(*tab++);
			ft_putchar('\n');
		}
	}
}

int		main(int ac, char **av)
{
	test_strsplit(ac, av);
	return (0);
}