#include <stdio.h>
#include "ft_isascii.c"
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

	printf("\nTHEIR FNC ************\n");
	
	printf("'%c' -> %d\n", a, ft_isascii(a));
	printf("'%c' -> %d\n", b, ft_isascii(b));
    printf("'%c' -> %d\n", C, ft_isascii(C));
	printf("'%c' -> %d\n", zero, ft_isascii(zero));
	printf("'%c' -> %d\n", one, ft_isascii(one));
    printf("'%c' -> %d\n", space, ft_isascii(space));
    printf("'%c' -> %d\n", special1, ft_isascii(special1));
    printf("'%c' -> %d\n", special2, ft_isascii(special2));
    printf("'%c' -> %d\n", special3, ft_isascii(special3));
    printf("null -> %d\n", ft_isascii(null));
    printf("'new line ' -> %d\n", ft_isascii(nl));
    
	
	printf("\nMINE ************\n");

	
    printf("'%c' -> %d\n", a, isascii(a));
    printf("'%c' -> %d\n", b, isascii(b));
    printf("'%c' -> %d\n", C, isascii(C));
    printf("'%c' -> %d\n", zero, isascii(zero));
    printf("'%c' -> %d\n", one, isascii(one));
    printf("'%c' -> %d\n", space, isascii(space));
    printf("'%c' -> %d\n", special1, isascii(special1));
    printf("'%c' -> %d\n", special2, isascii(special2));
    printf("'%c' -> %d\n", special3, ft_isascii(special3));
    printf("null -> %d\n", isascii(null));
    printf("'new line ' -> %d\n", isascii(nl));

    printf("%c -> %d\n", special3, isascii(special3));
        return (0);
}
