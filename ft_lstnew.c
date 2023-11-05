#include "ft_libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == 0)
		return (0);
	new_node->next = NULL;
	new_node->content = content;
	return (new_node);
}