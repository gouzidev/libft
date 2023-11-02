#include <stdio.h>
#include "ft_memchr.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a = 'z';
    const char str[] = "hello world wasup";
    printf("->  %s\n", (unsigned char *)ft_memchr(str, a, strlen(str)));
}