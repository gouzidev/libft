/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:41:51 by sgouzi            #+#    #+#             */
/*   Updated: 2023/10/30 21:48:41 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 127);
}
