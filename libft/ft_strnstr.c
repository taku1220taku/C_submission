#include "libft.h"

int	check_match(const char *start, const char *word, size_t word_len)
{
	size_t	i;

	i = 0;
	while (i < word_len)
	{
		if (start[i] != word[i])
			return (0);
		++i;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (needle == NULL || haystack == NULL)
		return (NULL);
	needle_len = ft_strlen(needle);

	if (needle_len == 0)
		return (haystack);
	else
	{
		i = 0;
		while (i < (len - needle_len + 1))
		{
			if (check_match(&haystack[i], needle, needle_len))
				return (&haystack[i]);
			++i;
		}
		return (NULL);
	}
}
