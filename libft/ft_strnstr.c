/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:15:16 by tkono             #+#    #+#             */
/*   Updated: 2026/02/15 14:00:53 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);

	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		h++;
	}
	return (NULL);
}

// static int	check_match(const char *start, const char *word, size_t word_len)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < word_len)
// 	{
// 		if (start[i] != word[i])
// 			return (0);
// 		++i;
// 	}
// 	return (1);
// }

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	needle_len;
// 	size_t	i;

// 	needle_len = ft_strlen(needle);
// 	if (needle_len == 0)
// 		return ((char *)haystack);
// 	if (len < needle_len)
// 		return (NULL);
// 	i = 0;
// 	while (i + needle_len - 1 < len && haystack[i])
// 	{
// 		if (check_match(&haystack[i], needle, needle_len))
// 			return ((char *)(haystack + i));
// 		++i;
// 	}
// 	return (NULL);
// }

// #include <stdio.h>
// int main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aab";
// 	printf("%s\n", ft_strnstr(haystack, needle, -1));
// 	return (0);
// }
