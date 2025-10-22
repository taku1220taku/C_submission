/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:12:54 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 18:12:55 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	if (!dst || !src)
		return (NULL);
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
