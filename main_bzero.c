/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:22:39 by sgouzi            #+#    #+#             */
/*   Updated: 2023/10/31 11:33:08 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "ft_bzero.c"

int main() {
    char s1[] = "master chef";
    char s2[] = "master chef";

    printf("mine before -> %s\n", s1);
    printf("ther before -> %s\n", s2);

    ft_bzero(s1, sizeof(s1));
    bzero(s2, sizeof(s2));

    printf("\n");

    printf("mine after  (caracters) -> ");
    for (size_t i = 0; i < sizeof(s1); i++) {
        printf("%c", s1[i]);
    }
    
    printf("\n");
	
	printf("mine after  (ascii) -> ");
    for (size_t i = 0; i < sizeof(s1); i++) {
        printf("%i", s1[i]);
    }
	
    printf("\n");
    printf("\n");
	
	printf("ther after  (caracters) -> ");
    for (size_t i = 0; i < sizeof(s2); i++) {
        printf("%c", s2[i]);
    }

    printf("\n");
    
	printf("ther after  (ascii) -> ");
    for (size_t i = 0; i < sizeof(s2); i++) {
        printf("%i", s2[i]);
    }

    printf("\n");

    return 0;
}
