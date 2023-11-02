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
#include "ft_strnstr.c"
#include <string.h>

char s1[9] = "aabbccdd";
char s2[9] = "aabbccgg";

char s3[9] = "aabbccdd";
char s4[9] = "a";

char s5[] = "text";
char s6[] = "";

char s7[] = "";
char s8[] = "";

char * res;

int main( void )
{

   printf("\ntest 0\n");
   printf("dyali\n");
   res = ft_strnstr(s1, s2, strlen(s1));
   printf("looking for '%s' in '%s': -> %s\n", s1, s2, res);

   printf("dyalhom\n");
   res = strnstr(s1, s2, strlen(s1));
   printf("looking for '%s' in '%s': -> %s\n", s1, s2, res);


   printf("\ntest 1\n");
   printf("dyali\n");
   res = ft_strnstr(s3, s4, strlen(s3));
   printf("looking for '%s' in '%s': -> %s\n", s3, s4, res);

   printf("dyalhom\n");
   res = strnstr(s3, s4, strlen(s3));
   printf("looking for '%s' in '%s': -> %s\n", s3, s4, res);


   printf("\ntest 2\n");
   printf("dyali\n");
   res = ft_strnstr(s3, s4, strlen(s3));
   printf("looking for '%s' in '%s': -> %s\n", s3, s4, res);

   printf("dyalhom\n");
   res = strnstr(s3, s4, strlen(s3));
   printf("looking for '%s' in '%s': -> %s\n", s3, s4, res);


   printf("\ntest 3\n");
   printf("dyali\n");
   res = ft_strnstr(s5, s6, strlen(s5));
   printf("looking for '%s' in '%s': -> %s\n", s5, s6, res);

   printf("dyalhom\n");
   res = strnstr(s5, s6, strlen(s5));
   printf("looking for '%s' in '%s': -> %s\n", s5, s6, res);

   printf("\ntest 4\n");
   printf("dyali\n");
   res = ft_strnstr(s7, s8, strlen(s7));
   printf("looking for '%s' in '%s': -> %s\n", s7, s8, res);

   printf("dyalhom\n");
   res = strnstr(s7, s8, strlen(s7));
   printf("looking for '%s' in '%s': -> %s\n", s7, s8, res);


}