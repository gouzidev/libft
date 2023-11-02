#include <stdlib.h>
#include <stdio.h>
void    *ft_calloc(size_t count, size_t size)
{
    size_t i;
    void    *buffer;
    size_t nbytes;

    i = 0;
    nbytes = count * size;
    buffer = malloc(nbytes);
    if (buffer == 0)
        return (0);
    while (i < nbytes)
        ((unsigned char *)buffer)[i++] = 0;
    return (buffer);
}