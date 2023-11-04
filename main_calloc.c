#include <stdlib.h>
#include <stdio.h>
#include "ft_calloc.c"

int main()
{
    char *str = ft_calloc(6, sizeof(char));
    size_t i = 0;
    while (i < 6)
    {
        printf("%i", str[i]);
        i++;
    }
    printf("\n\n");

    char *ints = ft_calloc(5, sizeof(int));
    i = 0;
    while (i < 5 * sizeof(int))
    {
        printf("%i", ints[i]);

        i++;
    }
    printf("\n\n");


    char *strs = ft_calloc(3, sizeof(char *));
    i = 0;
    while (i < 3 * sizeof(char *))
    {
        printf("%i", strs[i]);
        i++;
    }
}
