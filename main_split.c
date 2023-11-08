#include "ft_split.c"
#include <stdio.h>
#include "libft.h"

int main()
{
	char const *txt = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	ft_split(txt, ' ');
	char **res = ft_split(txt, ' ');
	int i = 0;
	while (i < 10)
	{
		printf("-> %s\n", res[i++]);
	}
}
