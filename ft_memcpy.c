/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:33:37 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/01 11:16:47 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("src[%i] -> %c\n", i ,((char *)src)[i]);
		printf("dst[%i] -> %c\n", i ,((char *)dst)[i]);
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

