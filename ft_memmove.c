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

int ft_strlen(char *s)
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

	ldst = ft_strlen((char *)dst);
	lsrc = ft_strlen((char *)src);
	while (lsrc >= 0 && ldst >= 0)
	{
		((char *)dst)[ldst - 3] = ((char *)src)[lsrc - 1];
		lsrc--;
		ldst--;
	}
	return (dst);
}
