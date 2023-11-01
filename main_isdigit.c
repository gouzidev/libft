#include <stdio.h>
#include "ft_isdigit.c"
#include <ctype.h>

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


	printf("\n\nORIGINAL\n");
	printf("'%c' -> %d\n", a, isdigit(a));
	printf("'%c' -> %d\n", b, isdigit(b));
    printf("'%c' -> %d\n", C, isdigit(C));
	printf("'%c' -> %d\n", zero, isdigit(zero));
	printf("'%c' -> %d\n", one, isdigit(one));
    printf("'%c' -> %d\n", space, isdigit(space));
    printf("'%c' -> %d\n", special1, isdigit(special1));
    printf("'%c' -> %d\n", special2, isdigit(special2));
    printf("'new line ' -> %d\n", isdigit(nl));
    printf("null -> %d\n", isdigit(null));

	printf("\n\nMINE\n");
	printf("'%c' -> %d\n", a, ft_isdigit(a));
	printf("'%c' -> %d\n", b, ft_isdigit(b));
    printf("'%c' -> %d\n", C, ft_isdigit(C));
	printf("'%c' -> %d\n", zero, ft_isdigit(zero));
	printf("'%c' -> %d\n", one, ft_isdigit(one));
    printf("'%c' -> %d\n", space, ft_isdigit(space));
    printf("'%c' -> %d\n", special1, ft_isdigit(special1));
    printf("'%c' -> %d\n", special2, ft_isdigit(special2));
    printf("'new line ' -> %d\n", ft_isdigit(nl));
    printf("null -> %d\n", ft_isdigit(null));
	return (0);
}
