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

char src1[9] = "aabbccdd";
char dst1[9];
char src2[9] = "aabbccdd";
char dst2[9];

char str1[9] = "aabbccdd";
char str2[9] = "aabbccdd";
char str3[9] = "aabbccdd";
char str4[9] = "aabbccdd";
char str5[9] = "aabbccdd";
char str6[9] = "aabbccdd";


int main( void )
{

   printf("test 0\n");
   printf("dyali\n");
   printf("The string: %s\n", dst1);
   ft_memmove(dst1, src1, 8);
   printf("New string: %s\n", dst1);

   printf("dyalhom\n");
   printf("The string: %s\n", dst2);
   memmove(dst2, src2, 8);
   printf("New string: %s\n", dst2);

   printf("test 1\n");
   printf("dyali\n");
   printf("The string: %s\n", str1);
   ft_memmove(str1, str1 + 2, 6);
   printf("New string: %s\n", str1);

   printf("dyalhom\n");
   printf("The string: %s\n", str2);
   memmove(str2, str2 + 2, 6);
   printf("New string: %s\n", str2);

   printf("test 2\n");
   printf("dyali\n");
   printf("The string: %s\n", str3);
   ft_memmove(str3 + 2, str3, 6);
   printf("New string: %s\n", str3);

   printf("dyalhom\n");
   printf("The string: %s\n", str4);
   memmove(str4 + 2, str4, 6);
   printf("New string: %s\n", str4);

   printf("test 3\n");
   printf("dyali\n");
   printf("The string: %s\n", str5);
   ft_memmove(str5, str5, 6);
   printf("New string: %s\n", str5);

   printf("dyalhom\n");
   printf("The string: %s\n", str6);
   memmove(str6, str6, 6);
   printf("New string: %s\n", str6);

}


/*char str[5] = "abcd";
char dst[3] = "123";

int main( void )
{
   printf("The string: %s\n", dst);
   memmove(dst, str,3);
    printf("New string: %s\n", dst);
}*/
