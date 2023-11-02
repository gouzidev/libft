#include <stdlib.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    char *loc;
    char *s2_start;

    loc = 0;
    s2_start = (char *)s2;
    while (*s1 && n > 0)
    {
        if (*s1 == *s2)
        {
            s2_start = (char *) s2;
            loc = (char *) s1;
            while (*s1 == *s2)
            {
                if (*(s2 + 1) == '\0')
                {
                    return (loc); 
                }
                s1++;
                s2++;
            }
        }
        else
        {
            loc = 0;
            s2 = (char *) s2_start;
        }
        s1++;
        n--;
    }
    return (0);
}