/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:49:31 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 22:09:59 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s_dst;
	unsigned const char	*s_src;
	size_t				i;

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
