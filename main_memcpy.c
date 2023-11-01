/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:29:38 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/01 10:57:17 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_memcpy.c"

#include <string.h>
int main()
{
	char src1[] = "i was source";
	char dest1[] = "hello bro lol";
	char *res1;


	char src2[] = "i was source";
	char dest2[] = "hello bro lol";
	char *res2;

	printf("dyalhom\n");
	res2 = memcpy(dest2, src2, strlen(src2) + 1);
	printf("src2 -> %s\n", src2);
	printf("dst2 -> %s\n", dest2);
	printf("res2 -> %s\n", res2);

	printf("dyali\n");
	res1 = ft_memcpy(dest1, src1, strlen(src1) + 1);
	printf("src1 -> %s\n", src1);
	printf("dst1 -> %s\n", dest1);
	printf("res1 -> %s\n", res1);


}
