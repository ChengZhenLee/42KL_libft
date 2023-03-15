#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**temp;

	if (*alst->next)
	{
		temp = &(*alst->next);
		ft_lstdel(temp, (*del));
		ft_lstdelone(alst, (*del));
	}
}
