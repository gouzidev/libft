#include "ft_libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    res = 0;
    sign = 1;
    i = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res * sign);
}