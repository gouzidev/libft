#include "libft.h"

void delete_int(void *ptr)
{
    ptr= NULL;
}

void *map_function(void *content)
{
	int *value = (int *)content;
	int *mapped_value = (int *)malloc(sizeof(int));
	if (mapped_value)
		*mapped_value = (*value) * 2;
	return mapped_value;
}

int main()
{
    // Sample function to use with ft_lstmap


    // Create a linked list with some integer values
    t_list *lst = NULL;
    int values[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        ft_lstadd_back(&lst, ft_lstnew(&values[i]));
    }

    // Use ft_lstmap to create a new list with mapped values
    t_list *mapped_lst = ft_lstmap(lst, map_function, delete_int);

    // Print the original and mapped lists
    t_list *temp = mapped_lst;
    while (temp)
    {
        printf("%d -> ", *((int *)(temp->content)));
        temp = temp->next;
    }
    printf("NULL\n");

    // Clean up the original and mapped lists
  
    return 0;
}