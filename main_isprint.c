#include <stdio.h>
#include "ft_isprint.c"
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
	unsigned char special3 = 242;
    size_t t = 5;
	printf("'%c' -> %d\n", a, ft_isprint(a));
	printf("'%c' -> %d\n", b, ft_isprint(b));
    printf("'%c' -> %d\n", C, ft_isprint(C));
	printf("'%c' -> %d\n", zero, ft_isprint(zero));
	printf("'%c' -> %d\n", one, ft_isprint(one));
    printf("'%c' -> %d\n", space, ft_isprint(space));
    printf("'%c' -> %d\n", special1, ft_isprint(special1));
    printf("'%c' -> %d\n", special2, ft_isprint(special2));
    printf("null -> %d\n", ft_isprint(null));
    printf("'new line ' -> %d\n", ft_isprint(nl));
    printf("Character: %c\n", (char)special3);

    printf("%c -> %d\n", special3, ft_isprint(special3));
	
       printf("'%c' -> %d\n", a, isprint(a));
        printf("'%c' -> %d\n", b, isprint(b));
    printf("'%c' -> %d\n", C, isprint(C));
        printf("'%c' -> %d\n", zero, isprint(zero));
        printf("'%c' -> %d\n", one, isprint(one));
    printf("'%c' -> %d\n", space, isprint(space));
    printf("'%c' -> %d\n", special1, isprint(special1));
    printf("'%c' -> %d\n", special2, isprint(special2));
    printf("null -> %d\n", isprint(null));
    printf("'new line ' -> %d\n", isprint(nl));
    printf("Character: %c\n", (char)special3);

    printf("%c -> %d\n", special3, isprint(special3));
        return (0);
}
