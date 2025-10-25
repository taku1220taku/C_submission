/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:54:43 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 15:24:42 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char			*s_dst;
	char			*s_src;
	unsigned int	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	s_dst = (char *)dst;
	s_src = (char *)src;
	if (s_dst <= s_src)
	{
		i = 0;
		while (i < len)
			s_dst[i++] = s_src[i++];
	}
	else
	{
		i = len - 1;
		while (i > -1)
			s_dst[i--] = s_src[i--];
	}
	return (dst);
}
