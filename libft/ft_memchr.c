/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:10:18 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 20:57:16 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return (str + i);
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
