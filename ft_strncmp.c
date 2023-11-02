#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (*s1 == *s2 && s1 && n > ++i)
    {
       printf("s1 -> %c     s2 -> %c \n",  *s1, *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}