/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:41:07 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/08 21:21:41 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char **free_all(char **str)
{
	
}*/

static int	count_words(char const *s1, char c)
{
	int	count;

	count = 0;
	while (*s1)
	{
		if (*s1 == '\0')
			return (count);
		else if (*s1 && *s1 == c)
		{
			while (*s1 && *s1 == c)
				(s1)++;
		}
		else if (*s1)
		{
			count++;
			while (*s1 && *s1 != c)
				s1++;
		}
	}
	return (count);
}

static char	*ft_copy(char const **str, char c)
{
	int		i;
	int		k;
	int		l;
	char	*buf;

	i = 0;
	l = 0;
	while ((*str)[i])
	{
		if ((*str)[i++] == c)
			break ;
		l++;
	}
	i = 0;
	buf = malloc((l + 1) * sizeof(char));
	if (buf == NULL)
		return (0);
	k = 0;
	while (i++ < l)
	{
		buf[k++] = **str;
		(*str)++;
	}
	buf[k] = '\0';
	return (buf);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	int		w;
	char	**res;

	wc = count_words(s, c);
	res = (char **)malloc((wc + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	w = 0;
	while (*s)
	{
		if (*s && *s == c)
		{
			while (*s && *s == c)
				s++;
		}
		else if (*s && *s != c)
			res[w++] = ft_copy(&s, c);
		else
			break ;
		s++;
	}
	res[w] = 0;
	return (res);
}
/*int main()
{
	char const *txt = "abcd 123    xxxxx";
	char **res = ft_split(txt, ' ');
	int i = 0;
	while (i < 6)
	{
		printf("-> %s\n", res[i++]);
	}
}*/
