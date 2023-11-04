#include "ft_libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *buff;

    i = 0;
    buff = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
    while (s[i])
    {
        buff[i] = (*f)(i, s[i]);
        i++;
    }
    buff[i] = '\0';
    return (buff);
}
