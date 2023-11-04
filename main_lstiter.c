#include "ft_libft.h"
#include <stdio.h>

void print_content(void *node)
{
    printf("-> %s\n", ((char *)((t_list*)node)->content));
}
int main()
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
    ft_lstiter(n1, &print_content);
}