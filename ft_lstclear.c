#include "ft_libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	while (*lst)
	{
		next = (*lst)->next;
		(*del)(*lst);
		free(lst);
		*lst = next;
	}
}