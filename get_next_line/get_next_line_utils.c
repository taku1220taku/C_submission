/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:07:31 by tkono             #+#    #+#             */
/*   Updated: 2026/02/13 16:02:05 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		++len;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
	{
		while (s1[++i])
			str[j++] = s1[i];
	}
	i = -1;
	while (s2[++i])
		str[j++] = s2[i];
	str[j] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s_copy;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	s_copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_copy[i] = s[start + i];
		++i;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		++i;
	}
	return (NULL);
}
