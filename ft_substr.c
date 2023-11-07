/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:34:43 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/05 21:35:07 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;
	size_t	output_len;
	size_t	str_len;

	str_len = 0;
	while (s[str_len])
		str_len++;
	i = 0;
	j = start;
	while (s[j++] && len - i > 0 && j <= str_len)
		i++;
	output_len = i;
	sub = (char *)malloc((output_len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (i < output_len)
	{
		sub[i] = s[j];
		i++;
		j++;
	}
	sub[i] = '\0';
	return ((char *)sub);
}
