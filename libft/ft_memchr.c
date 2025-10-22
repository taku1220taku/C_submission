/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:10:18 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 15:53:28 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)s;
	if (str == NULL)
		return (NULL);
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
// 	char S[10] = "hello";
// 	char c = 'e';

// 	printf("%c", *(char *)ft_memchr(S,c,4));
// }
