#include <stdio.h>
#include "ft_isalnum.c"

int main()
{
    char a = 'a';
    char b = 'b';
    char C = 'C';
    char zero = '0';
    char one = '1';
    char space = ' ';
	char nl = '\n';
	char null = '\0';
	char special1 = '$';
	char special2 = '^';

	printf("'%c' -> %d\n", a, ft_isalnum(a));
	printf("'%c' -> %d\n", b, ft_isalnum(b));
    printf("'%c' -> %d\n", C, ft_isalnum(C));
	printf("'%c' -> %d\n", zero, ft_isalnum(zero));
	printf("'%c' -> %d\n", one, ft_isalnum(one));
    printf("'%c' -> %d\n", space, ft_isalnum(space));
    printf("'%c' -> %d\n", special1, ft_isalnum(special1));
    printf("'%c' -> %d\n", special2, ft_isalnum(special2));
    printf("'new line ' -> %d\n", ft_isalnum(nl));
    printf("null -> %d\n", ft_isalnum(null));
	return (0);
}
