#include "ft_libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    (*del)(lst);
    free(lst);
}