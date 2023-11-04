#include "ft_libft.h"
#include <stdio.h>

int main() {
    // Test Case 1: Adding a new node to an empty list
    t_list *list1 = NULL;
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = "node 1";
    node1->next = NULL;
    ft_lstadd_back(&list1, node1);
    if (list1 == node1 && node1->next == NULL) {
        printf("Test Case 1: Passed - Added to an empty list\n");
    } else {
        printf("Test Case 1: Failed - Incorrect list structure\n");
    }

    // Test Case 2: Adding a new node to a non-empty list
    t_list *list2 = NULL;
    t_list *node2 = malloc(sizeof(t_list));
    node2->content = "node 2";
    node2->next = NULL;
    list2 = node1;
    t_list *node3 = malloc(sizeof(t_list));
    node3->content = "node 3";
    node3->next = NULL;
    ft_lstadd_back(&list2, node3);
    if (list2 == node1 && node1->next == node3 && node3->next == NULL) {
        printf("Test Case 2: Passed - Added to a non-empty list\n");
    } else {
        printf("Test Case 2: Failed - Incorrect list structure\n");
    }
    printf("size ->  %i\n", ft_lstsize(list1));
    free(node2);
    free(node3);

    return 0;
}