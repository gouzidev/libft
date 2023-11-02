/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:37:58 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/01 16:21:59 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int lsrc;
	int ldst;
	int i;
	int j;

	ldst = ft_strlen((char *)dst);
	lsrc = ft_strlen((char *)src);
	// printf("sizeof dst -> %lu\n", sizeof(dst));
	// printf("lsrc  -> %i\n", lsrc);
	printf("size of dst -> %lu\n", sizeof(*dst));
	if (ldst >= lsrc)
	{
		j = 0;
		i = 0;
		while (j < lsrc)
		{
			((char *)dst)[i] = ((char *)src)[j];
			i++;
			j++;
		}
	}
	else
	{
		while (ldst > 0)
		{
			((char *)dst)[ldst - 1] = ((char *)src)[lsrc - (lsrc - ldst) - 1];
			ldst--;
			lsrc--;
		}
	}
	return (dst);
}
