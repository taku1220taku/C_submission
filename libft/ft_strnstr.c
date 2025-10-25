/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:15:16 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 20:13:45 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_match(const char *start, const char *word, size_t word_len)
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
		return ((char *)haystack);
	else
	{
		i = 0;
		while (i < (len - needle_len + 1))
		{
			if (check_match(&haystack[i], needle, needle_len))
				return ((char *)(haystack + i));
			++i;
		}
		return (NULL);
	}
}
