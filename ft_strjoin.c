#include "ft_libft.h"

static int len(char const *s1)
{
    int l;

    l = 0;
    while (s1[l])
        l++;
    return (l);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int output_length;
    char *output;
    int i;
    int j;

    output_length = len(s1) + len(s2) + 1;
    output = (char *) malloc(output_length);
    i = 0;
    while (i < len(s1))
    {
        output[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < len(s2))
    {
        output[i] = s2[j];
        i++;
        j++;
    }
    output[i] = '\0';
    return (output);
}