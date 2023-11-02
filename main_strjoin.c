#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_strjoin.c"
int main()
{
    const char *str1 = "hello";
    const char *str2 = " world";
    char *res = ft_strjoin(str1, str2);
    printf("res of joining '%s'  and  '%s'  -> '%s'\n", str1, str2, res);
    const char *str3 = "help";
    const char *str4 = "salahgouzi";
    res = ft_strjoin(str3, str4);
    printf("res of joining '%s'  and  '%s'  -> '%s'\n", str3, str4, res);
    const char *str5 = "he";
    const char *str6 = "";
    res = ft_strjoin(str5, str6);
    printf("res of joining '%s'  and  '%s'  -> '%s'\n", str5, str6, res);

    const char *str7 = "";
    const char *str8 = "he";
    res = ft_strjoin(str7, str8);
    printf("res of joining '%s'  and  '%s'  -> '%s'\n", str7, str8, res);

    const char *str9 = "";
    const char *str10 = "";
    res = ft_strjoin(str9, str10);
    printf("res of joining '%s'  and  '%s'  -> '%s'\n", str9, str10, res);

}