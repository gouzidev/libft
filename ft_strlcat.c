/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:34:54 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/05 22:35:50 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:34:46 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/05 22:34:46 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lsrc;
	size_t	ldst;
	size_t	i;

	lsrc = ft_len((char *)src);
	ldst = ft_len(dst);
	if (size <= lsrc + ldst)
		return (size + lsrc);
	else
	{
		i = 0;
		while (i < size - ldst)
		{
			dst[ldst + i] = src[i];
			i++;
		}
		return (ldst + lsrc);
	}
}
