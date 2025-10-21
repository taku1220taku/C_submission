#include "libft.h"

char	*strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
