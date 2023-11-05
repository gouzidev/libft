#include "ft_libft.h"
#include "stdio.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr_old_lst;

	printf("last -> \n");
	ptr_old_lst = lst;
	head = lst;
	if (lst)
	{
		head = ft_lstnew((*f)(head->content));
		while (lst->next)
		{
			ft_lstadd_back(&head, ft_lstnew((*f)(lst->next->content)));
			lst = lst->next;
		}
	}
	ft_lstclear(&ptr_old_lst, del);
	return (head);
}

#include <stdio.h>

char	*print_content(void *node)
{
	return ((char *)(((t_list *)node)->content));
}

void delete (void *content)
{
	int	i;

	i = 0;
	while (((char *)content)[i])
	{
		((char *)content)[i++] = 'x';
	}
}
int	main(void)
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	n1->content = "1";
	n2->content = "2";
	n3->content = "3";
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	ft_lstmap(n1, (void *)&print_content, delete);
}