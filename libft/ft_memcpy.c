/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:49:31 by tkono             #+#    #+#             */
/*   Updated: 2026/02/15 13:41:55 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s_dst;
	const unsigned char	*s_src;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	s_dst = (unsigned char *)dst;
	s_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(s_dst + i) = *(s_src + i);
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int main()
// {
// 	char *dst = (char *)malloc(10);
// 	char *src = "hello wwwwww";
// 	ft_memcpy(dst,src,7);
// 	dst[7] = 0;
// 	printf("%s",dst);
// }
