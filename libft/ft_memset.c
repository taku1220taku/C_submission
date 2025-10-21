#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	character;

	p = (unsigned char *)b;
	character = (unsigned char)c;
	while (len--)
	{
		*p = character;
		p++;
	}
	return (b);
}
