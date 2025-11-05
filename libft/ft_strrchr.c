/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:15:30 by tkono             #+#    #+#             */
/*   Updated: 2025/11/05 13:05:10 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cc;

	if (!s)
		return (NULL);
	cc = (unsigned char)c;
	if (cc == '\0')
		return ((char *)s);
	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		i--;
		if (s[i] == cc)
			return ((char *)(s + i));
	}
	return (0);
}
