/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:57:42 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/01 16:21:49 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_memmove.c"
#include <string.h>

/*int main()
{
	char src[] = "hello world";
	char dest[] = "death planet";
	char *res;
	res = memmove(dest, src, strlen(src) + 1);
	printf("src ->  %s\n", src);
	printf("dest -> %s\n", dest);
	printf("res  -> %s\n", res);
}*/



char str1[9] = "aabbccdd";

int main( void )
{
   printf("sizeof dest ->  %lu\n", sizeof(str1));
   printf("sizeof src  ->  %lu\n", sizeof(str1));
   printf("The string: %s\n", str1);
   ft_memmove(str1, str1 + 2, 6);
   printf("New string: %s\n", str1);
}


/*char str[5] = "abcd";
char dst[3] = "123";

int main( void )
{
   printf("The string: %s\n", dst);
   memmove(dst, str,3);
    printf("New string: %s\n", dst);
}*/
