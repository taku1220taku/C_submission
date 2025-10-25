/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:12:54 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 21:18:54 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	else if (dest_len < dstsize)
	{
		i = 0;
		while (src[i] != '\0' && dest_len < dstsize - 1)
		{
			dst[dest_len] = src[i];
			i++;
			dest_len++;
		}
		dst[dest_len] = '\0';
		return (dest_len + src_len - i);
	}
	else
		return (src_len + dstsize);
}

// #include <stdio.h>
// int main()
// {
// 	char dst[100] = "hello";
// 	char src[100] = "takeshi";
// 	printf("%ld\n", ft_strlcat(dst, src, 9));
// 	printf("%s", dst);
// }
