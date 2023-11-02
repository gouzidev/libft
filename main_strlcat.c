#include <stdio.h>
#include "ft_strlcat.c"
#include <string.h>

int main()
{
    char src1[] = "hello";
    char dest1[10] = "man";
    size_t res = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("dest1 -> %s\n", dest1);
    printf("src1 -> %s\n", src1);
    printf("res -> %lu\n", res);
}