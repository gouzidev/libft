#include "ft_libft.h"

char *ft_strdup(const char *s1)
{
    int len;
    int i;
    char *buf;

    len = 0;
    while (s1[len])
        len++;
    buf = malloc(len * sizeof(char));
    if (buf == 0)
        return (0);
    i = 0;
    while (i < len)
    {
        buf[i] = s1[i];
        i++;
    }    

    return (buf);
    
}