/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:54:43 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 19:11:23 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*s_dst;
	char			*s_src;
	size_t			i;

	if (dst == NULL || src == NULL)
		return (NULL);
	s_dst = (char *)dst;
	s_src = (char *)src;
	if (s_dst <= s_src)
	{
		i = 0;
		while (i < n)
		{
			s_dst[i] = s_src[i];
			++i;
		}
	}
	else
	{
		i = n;
		while (--i > 0)
			s_dst[i] = s_src[i];
		s_dst[0] = s_src[0];
	}
	return (dst);
}

// #include <stdio.h>
// int main()
// {
// 	char src[20] = "hello wLwwww";
// 	ft_memmove((src + 6),src,3);
// 	printf("%s",src);
// }
