/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:57:42 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/03 15:48:15 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strnstr.c"
#include <string.h>

char s1[9] = "aabbccdd";
char s2[9] = "a";

char s3[9] = "aabbccdd";
char s4[9] = "bb";

char s5[] = "text";
char s6[] = "";

char s7[] = "";
char s8[] = "hello";

char s9[] = "hello";
char s10[] = "lo";

char s11[] = "perperfect";
char s12[] = "x";

char s13[] = "here";
char s14[] = "here";

char s15[] = "here";

char *s16 = NULL;
char s17[] = "here";

char s18[] = "here";
char *s19 = NULL;

char * res;

int main( void )
{

   printf("\ntest 0  (search entire string)\n");
   res = ft_strnstr(s1, s2, strlen(s1));
   printf("mine -> '%s' in '%s': -> %s\n", s2, s1, res);
   res = strnstr(s1, s2, strlen(s1));
   printf("ters -> '%s' in '%s': -> %s\n", s2, s1, res);

   printf("\ntest 1 (search first 5 caracters)\n");
   res = ft_strnstr(s3, s4, 5);
   printf("mine -> '%s' in '%s': -> %s\n", s4, s3, res);
   res = strnstr(s3, s4, 5);
   printf("ters -> '%s' in '%s': -> %s\n", s4, s3, res);

   printf("\ntest 2 (empty needle)\n");
   res = ft_strnstr(s5, s6, 4);
   printf("mine -> '%s' in '%s': -> %s\n", s6, s5, res);
   res = strnstr(s5, s6, 4);
   printf("ters -> '%s' in '%s': -> %s\n", s6, s5, res);

   printf("\ntest 3 (empty haystack)\n");
   res = ft_strnstr(s7, s8, 4);
   printf("mine -> '%s' in '%s': -> %s\n", s8, s7, res);
   res = strnstr(s7, s8, 4);
   printf("ters -> '%s' in '%s': -> %s\n", s8, s7, res);

   printf("\ntest 4 (needle at end)\n");
   res = ft_strnstr(s9, s10, 10);
   printf("mine -> '%s' in '%s': -> %s\n", s10, s9, res);
   res = strnstr(s9, s10, 10);
   printf("ters -> '%s' in '%s': -> %s\n", s10, s9, res);

   printf("\ntest 5 (needle not in haystack)\n");
   res = ft_strnstr(s11, s12, strlen(s11));
   printf("mine -> '%s' in '%s': -> %s\n", s12, s11, res);
   res = strnstr(s11, s12, strlen(s11));
   printf("ters -> '%s' in '%s': -> %s\n", s12, s11, res);

   printf("\ntest 6 (needle identical to haystack)\n");
   res = ft_strnstr(s13, s14, strlen(s13));
   printf("mine -> '%s' in '%s': -> %s\n", s14, s13, res);
   res = strnstr(s13, s14, strlen(s13));
   printf("ters -> '%s' in '%s': -> %s\n", s14, s13, res);

   printf("\ntest 7 (needle = haystack)\n");
   res = ft_strnstr(s15, s15, strlen(s15));
   printf("mine -> '%s' in '%s': -> %s\n", s15, s15, res);
   res = strnstr(s15, s15, strlen(s15));
   printf("ters -> '%s' in '%s': -> %s\n", s15, s15, res);

   printf("\ntest 8 (haystack is NULL)\n");
   res = ft_strnstr(s16, s17, strlen(s16));
   printf("mine -> '%s' in '%s': -> %s\n", s17, s16, res);
   res = strnstr(s16, s17, strlen(s16));
   printf("ters -> '%s' in '%s': -> %s\n", s17, s16, res);

   printf("\ntest 9 (needle is NULL)\n");
   res = strnstr(s19, s18, strlen(s19));
   printf("mine -> '%s' in '%s': -> %s\n", s18, s19, res);
   res = ft_strnstr(s19, s18, strlen(s19));
   printf("ters -> '%s' in '%s': -> %s\n", s18, s19, res);
}