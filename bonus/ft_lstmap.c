#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*start;

	if (lst)
	{
		start = (*f)(lst);
		if (!start)
			return (NULL);
		temp = start;
		lst = lst->next;
	}
	while (lst)
	{
		temp->next = (*f)(lst);
		if (!(temp->next))
			return (NULL);
		temp = temp->next;
		lst = lst->next;
	}
	return (start);
}
