#include "ft_libft.h"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:24:42 by sgouzi            #+#    #+#             */
/*   Updated: 2023/09/16 15:15:33 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_rec(int n, int fd)
{
	if (n > 0)
	{
		ft_print_rec(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n == 0)
		    ft_putchar_fd((n % 10) + '0', fd);
		if (n < 0)
		{
		    ft_putchar_fd('-', fd);

			n = -n;
		}
		if (n > 0)
			ft_print_rec(n, fd);
	}
}