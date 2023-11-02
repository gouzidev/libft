#include "ft_libft.h"


static int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (*s1 == *s2 && s1 && n > ++i)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    char *loc;
    char *s2_start;

    loc = 0;
    s2_start = (char *)s2;
    while (*s1)
    {
        if (ft_strncmp(s1, s2, n) == 0)
            return ((char *)s1);
        s1++;
    }
    return (0);
}