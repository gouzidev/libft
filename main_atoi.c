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
#include <stdlib.h>
#include "ft_atoi.c"
#include <string.h>


int main( void )
{
    const char *s1 = "99";
    const char *s2 = "  123";
    const char *s3 = "-42";
    const char *s4 = "+1337";
    const char *s5 = "--500";
    const char *s6 = "321abc";
    const char *s7 = "1 4 5";
    const char *s8 = "  ";
    const char *s9 = "";
    int res;
    printf("\ntest 0\n");
    printf("dyali\n");
    res = ft_atoi(s1);
    printf("res -> %i\n", res);

    printf("dyalhom\n");
    res = atoi(s1);
    printf("res -> %i\n", res);
    

    printf("\ntest 1\n");
    printf("dyali\n");
    res = ft_atoi(s2);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s2);
    printf("res -> %i\n", res);
    

    printf("\ntest 2\n");
    printf("dyali\n");
    res = ft_atoi(s3);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s3);
    printf("res -> %i\n", res);
    

    printf("\ntest 3\n");
    printf("dyali\n");
    res = ft_atoi(s4);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s4);
    printf("res -> %i\n", res);
    
    
    printf("\ntest 4\n");
    printf("dyali\n");
    res = ft_atoi(s5);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s5);
    printf("res -> %i\n", res);
    

    printf("\ntest 5\n");
    printf("dyali\n");
    res = ft_atoi(s6);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s6);
    printf("res -> %i\n", res);
    

    printf("\ntest 6\n");
    printf("dyali\n");
    res = ft_atoi(s7);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s7);
    printf("res -> %i\n", res);

    printf("\ntest 7\n");
    printf("dyali\n");
    res = ft_atoi(s8);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s8);
    printf("res -> %i\n", res);


    printf("\ntest 8\n");
    printf("dyali\n");
    res = ft_atoi(s9);
    printf("res -> %i\n", res);
    
    printf("dyalhom\n");
    res = atoi(s9);
    printf("res -> %i\n", res);
}   