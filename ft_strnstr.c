#include "ft_libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    while (*s1)
    {
        if (ft_strncmp(s1, s2, n) == 0)
            return ((char *)s1);
        s1++;
    }
    return (0);
}