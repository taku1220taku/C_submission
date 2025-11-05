/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:54:43 by tkono             #+#    #+#             */
/*   Updated: 2025/11/05 16:44:10 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*s_dst;
	unsigned const char	*s_src;
	size_t				i;

	if (dst == NULL || src == NULL)
		return (NULL);
	s_dst = (unsigned char *)dst;
	s_src = (unsigned const char *)src;
	if (s_dst <= s_src)
		ft_memcpy(dst, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			--i;
			s_dst[i] = s_src[i];
		}
	}
	return (dst);
}

// #include <stdio.h>
// int main()
// {
// 	char src[20] = "hello wLwwww";
// 	ft_memmove((src),src + 6,1);
// 	printf("%s\n",src);
// }
