#include <stdio.h>
#include "ft_strchr.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a = 'h';
    const char str[] = "hello world wasup";
    printf("->  %s\n", ft_strchr(str, a));
}