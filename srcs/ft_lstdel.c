#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*elem;

	if (!alst)
		return ;
	while (*alst)
	{
		elem = *alst;
		*alst = (*alst)->next;
		ft_lstdelone(&elem, del);
	}
}