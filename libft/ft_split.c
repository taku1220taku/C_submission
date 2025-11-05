/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:51:03 by tkono             #+#    #+#             */
/*   Updated: 2025/10/31 14:47:53 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	prev;

	i = 0;
	count = 0;
	prev = c;
	while (s[i])
	{
		if (prev == c && s[i] != c)
			++count;
		prev = s[i];
		++i;
	}
	return (count);
}

static size_t	ft_wordlen_count(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	*ft_free_all(char **result, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(result[i]);
		++i;
	}
	free(result);
	return (NULL);
}

char	*ft_strdup_till_c(const char *s1, char c)
{
	char	*s2;
	size_t	len ;

	if (!s1)
		return (NULL);
	len = ft_wordlen_count(s1, c);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len + 1);
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**result;
	char	prev;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	prev = c;
	while (s[i])
	{
		if (prev == c && s[i] != c)
		{
			result[j] = ft_strdup_till_c(&s[i], c);
			if (!result[j])
				return (ft_free_all(result, j));
			++j;
		}
		prev = s[i];
		++i;
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char	c;
// 	c = ' ';
// 	printf("%s\n",ft_split("h hkj hello world ", c)[1]);
// 	c = '\0';
// 	printf("%s\n",ft_split("hellotototot",c)[0]);
// }
