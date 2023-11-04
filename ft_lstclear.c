#include "ft_libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *next = (*lst)->next;
    while (*lst && (*lst)->next)
    {
        (*del)(*lst);
        free(lst);
        *lst = next;
    }
}