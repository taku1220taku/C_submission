/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:17:14 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 18:13:52 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	if (!dst || !src)
		return (NULL);
	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
