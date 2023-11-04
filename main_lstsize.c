#include "ft_libft.h"
#include "ft_lstsize.c"

int main() {
    t_list *list = NULL;

    t_list *node1 = malloc(sizeof(t_list));
    node1->content = "node 1";
    node1->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = "node 2";
    node2->next = NULL;

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = "node 3";
    node3->next = NULL;

    list = node1;
    node1->next = node2;
    node2->next = node3;

    int size = ft_lstsize(list);
    printf("size -> : %d\n", size);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}