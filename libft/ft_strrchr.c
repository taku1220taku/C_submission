/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:15:30 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 22:17:24 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cc;

	i = ft_strlen(s);
	cc = (unsigned char)c;
	while (i > 0)
	{
		if (s[i] == cc)
			return ((char *)(s + i));
		--i;
	}
	if (cc == '\0')
		return ((char *)s + i);
	if (s[0] == cc)
		return ((char *)s);
	return (0);
}
