#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	new->next = *alst;
	*alst = new;
}