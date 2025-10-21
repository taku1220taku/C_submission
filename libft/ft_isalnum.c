#include "libft.h"

int	is_alnum(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);

}
