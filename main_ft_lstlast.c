
#include "ft_libft.h"
#include <stdio.h>

int main() {
    // Test Case 1: Empty list
    t_list *list1 = NULL;
    t_list *last1 = ft_lstlast(list1);
    if (last1 == NULL) {
        printf("Test Case 1: Passed - Empty list\n");
    } else {
        printf("Test Case 1: Failed - Expected NULL, but got a non-NULL result\n");
    }

    // Test Case 2: List with one element
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = "node 1";
    node1->next = NULL;
    t_list *list2 = node1;
    t_list *last2 = ft_lstlast(list2);
    if (last2 == node1) {
        printf("Test Case 2: Passed - List with one element\n");
    } else {
        printf("Test Case 2: Failed - Expected last2 to be node1, but it's not\n");
    }
    free(node1);

    // Test Case 3: List with multiple elements
    t_list *node2 = malloc(sizeof(t_list));
    node2->content = "node 2";
    node2->next = NULL;
    t_list *node3 = malloc(sizeof(t_list));
    node3->content = "node 3";
    node3->next = NULL;
    list2 = node1;
    node1->next = node2;
    node2->next = node3;
    t_list *last3 = ft_lstlast(list2);
    if (last3 == node3) {
        printf("Test Case 3: Passed - List with multiple elements\n");
    } else {
        printf("Test Case 3: Failed - Expected last3 to be node3, but it's not\n");
    }
    free(node2);
    free(node3);

    return 0;
}