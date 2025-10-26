/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:54:01 by tkono             #+#    #+#             */
/*   Updated: 2025/10/26 14:45:04 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s_copy;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	s_copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_copy)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		s_copy[i] = s[start + i];
		++i;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
