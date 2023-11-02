#include "ft_libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
    char *last;

    last = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            last = (char *)&str[i];
        }
        i++;
    }
    return (last);
}
