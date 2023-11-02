#include <stdio.h>
#include "ft_strrchr.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a = 'a';
    const char str[] = "ana salah haha";
    printf("->  %s\n", ft_strrchr(str, a));
}