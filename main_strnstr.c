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
char s8[] = "";

char s9[] = "hello";
char s10[] = "lo";

char s11[] = "perperfect";
char s12[] = "per";

char * res;

int main( void )
{

   printf("\ntest 0\n");
   res = ft_strnstr(s1, s2, strlen(s2));
   printf("looking for '%s' in '%s': -> %s\n", s2, s1, res);

   printf("\ntest 1\n");
   res = ft_strnstr(s3, s4, strlen(s4));
   printf("looking for '%s' in '%s': -> %s\n", s4, s3, res);

   printf("\ntest 3\n");
   res = ft_strnstr(s5, s6, strlen(s6));
   printf("looking for '%s' in '%s': -> %s\n", s6, s5, res);

   printf("\ntest 4\n");
   res = ft_strnstr(s7, s8, strlen(s8));
   printf("looking for '%s' in '%s': -> %s\n", s8, s7, res);

   printf("\ntest 5\n");
   res = ft_strnstr(s9, s10, strlen(s10));
   printf("looking for '%s' in '%s': -> %s\n", s10, s9, res);

   printf("\ntest 5\n");
   res = ft_strnstr(s11, s12, strlen(s12));
   printf("looking for '%s' in '%s': -> %s\n", s12, s11, res);

}
