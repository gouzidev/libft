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
#include "ft_memcmp.c"
#include <string.h>

char s1[9] = "aabbccdd";
char s2[9] = "aabbccgg";
int n1 = 6;
int n2 = 2;

char s3[9] = "aabbccdd";
char s4[9] = "a";

char s5[] = "text";
char s6[] = "";

char s7[] = "";
char s8[] = "";

int i1[4] = {7, 2, 5, 4};
int i2[4] = {7, 2, 3, 4};

int res;

int main( void )
{

   printf("\ntest 0\n");
   printf("dyali\n");
   res = ft_memcmp(s1, s2, n1);
   printf("result of comparing (%i) \
   bytes '%s' & '%s': -> %i\n", n1, s1, s2, res);

   printf("dyalhom\n");
   res = memcmp(s1, s2, n1);
   printf("result of comparing (%i) \
   bytes '%s' & '%s': -> %i\n", n1, s1, s2, res);


   printf("\ntest 1\n");
   printf("dyali\n");
   res = ft_memcmp(s3, s4, n1);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n1, s3, s4, res);

   printf("dyalhom\n");
   res = memcmp(s3, s4, n1);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n1, s3, s4, res);


   printf("\ntest 2\n");
   printf("dyali\n");
   res = ft_memcmp(s3, s4, n2);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n2, s3, s4, res);

   printf("dyalhom\n");
   res = memcmp(s3, s4, n2);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n2, s3, s4, res);


   printf("\ntest 3\n");
   printf("dyali\n");
   res = ft_memcmp(s5, s6, n2);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n2, s5, s6, res);

   printf("dyalhom\n");
   res = memcmp(s5, s6, n2);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n2, s5, s6, res);

   printf("\ntest 4\n");
   printf("dyali\n");
   res = ft_memcmp(s7, s8, n2);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n2, s7, s8, res);

   printf("dyalhom\n");
   res = memcmp(s7, s8, n2);
   printf("result of comparing (%i) bytes '%s' & '%s': -> %i\n", n2, s7, s8, res);


   printf("\ntest 5\n");
   printf("dyali\n");
   res = ft_memcmp(s1, s2, 12);
   printf("result of comparing (%i) bytes : -> %i\n", 12, res);

   printf("dyalhom\n");
   res = memcmp(s1, s2, 12);
   printf("result of comparing (%i) bytes : -> %i\n", 12, res);

}