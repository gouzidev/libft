#include "ft_libft.h"
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    int l;
    char *buff;

    i = 0;
    l = ft_strlen(s);
    printf("length will be -> %i\n", ft_strlen((char *)s) + 1);
    buff = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
    while (s[i])
    {
        buff[i] = (*f)(i, s[i]);
        i++;
    }
    buff[i] = '\0';
    return (buff);
}