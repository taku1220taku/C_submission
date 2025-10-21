#include <stdlib.h>
void	ft_bzero(void *s, unsigned int n);

void	*calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, size * count);
	return (0);
}
