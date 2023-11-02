#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (*((unsigned char *)s1) == *((unsigned char *)s2) && s1 && n > ++i)
    {
        s1++;
        s2++;
    }
    return (*((unsigned char *)s1) - *((unsigned char *)s2));
}
