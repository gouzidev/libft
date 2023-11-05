#include "ft_libft.h"

static int	in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int start;
	int end = strlen(s1);
	char *buff;

	i = 0;
	while (s1[i])
	{
		if (!in_set(s1[i], set))
			break ;
		i++;
	}
	start = i;
	while (end - 1 > start)
	{
		if (!in_set(s1[end - 1], set))
			break ;
		end--;
	}
	i = 0;
	buff = malloc((end - start + 1) * sizeof(char));
	while (start + i < end)
	{
		buff[i] = s1[start + i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}