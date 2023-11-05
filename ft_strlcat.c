#include "ft_libft.h"

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
	size_t lsrc;
	size_t ldst;
	size_t i;

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