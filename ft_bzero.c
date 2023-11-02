/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:20:31 by sgouzi            #+#    #+#             */
/*   Updated: 2023/10/31 11:32:53 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char*)s = 0;
		s++;
		i++;
	}
}
