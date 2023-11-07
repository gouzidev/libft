/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:33:53 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/07 02:01:33 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s2[i] != '\0' && s1[i] == s2[i] && n > 1)
	{
		i++;
		n--;
	}
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
