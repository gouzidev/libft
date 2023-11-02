/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:16:37 by sgouzi            #+#    #+#             */
/*   Updated: 2023/10/30 18:36:58 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int	c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_isalpha(int	c)
{
	int islower = (c >= 65 && c <= 90);
	int isupper = (c >= 97 && c <= 122);
	return (islower || isupper);
}

int	ft_isalnum(int	c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
