/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:54:01 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 15:22:33 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*s_copy;

	if (!s)
		return (NULL);
	s_copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_copy)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		s_copy[i] = s[start + i];
		++i;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
