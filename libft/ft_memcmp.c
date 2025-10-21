#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1 = (unsigned char *)s1;
	unsigned char	*us2 = (unsigned char *)s2;

	if (us1 == NULL || us1 == NULL)
		return (NULL);
	while (n--)
	{
		if (*us1 != *us2)
			return (*us1 - *us2);
		++us1;
		++us2;
	}
	return (0);
}
