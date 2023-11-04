#include <stdio.h>
#include <stdlib.h>

#include "ft_itoa.c"


int main()
{
    char *res;
    res = ft_itoa(1337);
    printf(" ->  %s\n", res);
    res = ft_itoa(0);
    printf(" ->  %s\n", res);
    res = ft_itoa(-42);
    printf(" ->  %s\n", res);
    res = ft_itoa(-2147483648);
    printf(" ->  %s\n", res);
    res = ft_itoa(2147483647);
    printf(" ->  %s\n", res);
    res = ft_itoa(99);
    printf(" ->  %s\n", res);
    res = ft_itoa(1);
    printf(" ->  %s\n", res);


}