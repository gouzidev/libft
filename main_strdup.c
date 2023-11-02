#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_strdup.c"

int main()
{
    const char *originale = "hello";

    char *str1 = strdup(originale);
    int i = 0;
    printf("dyalhom -> %s\n", str1);
    printf("dyalhom (null terminator) -> %i\n", *(str1 + 5));


    char *str2 = ft_strdup(originale);
    i = 0;
    printf("dyali -> %s\n", str2);
    printf("dyali (null terminator) -> %i\n", *(str2 + 5));

}