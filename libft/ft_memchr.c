/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:10:18 by tkono             #+#    #+#             */
/*   Updated: 2026/02/15 12:24:27 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return ((void *)(str + i));
		++i;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char *S = NULL;
// 	char c = 'o';

// 	printf("%p", (char *)ft_memchr(S,c,5));
// }
