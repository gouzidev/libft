/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:29:38 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/07 02:41:48 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!src || !dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
#include <string.h>
int main()
{
	char src1[] = "i £was source";
	char dest1[] = "hello bro lol";
	char *res1;


	char src2[] = "i £was source";
	char dest2[] = "hello bro lol";
	char *res2;


	printf("dyali\n");
	res2 = ft_memcpy(dest2, src2, strlen(src2) + 1);
	printf("src2 -> %s\n", src2);
	printf("dst2 -> %s\n", dest2);
	printf("res2 -> %s\n", res2);
	printf("dyalhom\n");

	
	res1 = memcpy(dest1, src1, strlen(src1) + 1);
	printf("src1 -> %s\n", src1);
	printf("dst1 -> %s\n", dest1);
	printf("res1 -> %s\n", res1);

	
}
