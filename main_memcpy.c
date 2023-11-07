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
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
#include <string.h>
int main()
{
	char src1[] = "i was source";
	char dest1[] = "hello bro lol";
	char *res1;


	char src2[] = "i was source";
	char dest2[] = "hello bro lol";
	char *res2;
	
	char *src3 = NULL;
	char *dest3 = NULL;
	char *res3;

	char *src4 = NULL;
	char *dest4 = NULL;
	char *res4;
	
	
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

	
	printf("dyalhom\n");
	res3 = memcpy(dest3, src3, 17);
	printf("src3 -> %s\n", src3);
	printf("dst3 -> %s\n", dest3);
	printf("res3 -> %s\n", res3);

	printf("dyali\n");
	res4 = ft_memcpy(dest4, src4, 17);
	printf("src4 -> %s\n", src4);
	printf("dst4 -> %s\n", dest4);
	printf("res4 -> %s\n", res4);


}
