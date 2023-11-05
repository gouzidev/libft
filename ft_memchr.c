#include "ft_libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*((unsigned char *)s) == c)
		{
			return ((unsigned char *)s);
		}
		n--;
		s++;
	}
	return (0);
}