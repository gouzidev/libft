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
#include "ft_strtrim.c"
#include <string.h>

char s1[] = "   ,,_,,  hello world sup...";
char s2[] = ". ,_-";
char * res;

char s3[] = "world";
char s4[] = " ,_-";

char s5[] = "";
char s6[] = " ,_-";

char s7[] = "------hello------";
char s8[] = " ,_-";


char s9[] = "------------";
char s10[] = "-";


char s11[] = "";
char s12[] = "-";


char s13[] = "hello world";
char s14[] = "";



int main( void )
{
    res = ft_strtrim(s1, s2);
    printf("(%s) - (%s) = %s\n", s1, s2, res);


    res = ft_strtrim(s3, s4);
    printf("(%s) - (%s) = %s\n", s3, s4, res);

    res = ft_strtrim(s5, s6);
    printf("(%s) - (%s) = %s\n", s5, s6, res);

    res = ft_strtrim(s7, s8);
    printf("(%s) - (%s) = %s\n", s7, s8, res);

    res = ft_strtrim(s9, s10);
    printf("(%s) - (%s) = %s\n", s9, s10, res);

    res = ft_strtrim(s11, s12);
    printf("(%s) - (%s) = %s\n", s11, s12, res);

    res = ft_strtrim(s13, s14);
    printf("(%s) - (%s) = %s\n", s13, s14, res);

}