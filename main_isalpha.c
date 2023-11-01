#include <stdio.h>
#include "ft_isalpha.c"

int main()
{
    char a = 'a';
    char b = 'b';
    char C = 'C';
    char space = ' ';
	char nl = '\n';
	char null = '\0';
	char special1 = '$';
	char special2 = '^';
    
	printf("'%c' -> %d\n", a, ft_isalpha(a));
	printf("'%c' -> %d\n", b, ft_isalpha(b));
    printf("'%c' -> %d\n", C, ft_isalpha(C));
    printf("'%c' -> %d\n", space, ft_isalpha(space));
    printf("'%c' -> %d\n", special1, ft_isalpha(special1));
    printf("'%c' -> %d\n", special2, ft_isalpha(special2));
    printf("'new line ' -> %d\n", ft_isalpha(nl));
    printf("null -> %d\n", ft_isalpha(null));
	return (0);
}
