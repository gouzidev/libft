#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_substr.c"

int main()
{
    const char *str1 = "hello_world";

    char *res = ft_substr(str1, 4, 3);
    printf("test 0 (all good)\n");
    printf("res -> %s\n", res);


   const char *str2 = "hello";
    res = ft_substr(str2, 4, 3);
    printf("test 1 (cant copy all)\n");
    printf("res -> %s\n", res);


   const char *str3 = "help";
    res = ft_substr(str3, 4, 2);
    printf("test 1 (index at end)\n");
    printf("res -> %s\n", res);


   const char *str4 = "salahgouzi";
    res = ft_substr(str4, 40, 2);
    printf("test 1 (index too big)\n");
    printf("res -> %s\n", res);

   const char *str5 = "he";
    res = ft_substr(str5, 3, 5);
    printf("test 1 (index and len too big than length)\n");
    printf("res -> %s\n", res);

}