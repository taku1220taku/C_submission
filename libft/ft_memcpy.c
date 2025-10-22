/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:49:31 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 15:53:59 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	char			*s_dst;
	char			*s_src;

	if (dst == NULL || src == NULL)
		return (NULL);
	s_dst = (char *)dst;
	s_src = (char *)src;
	while (i < n)
	{
		*(s_dst + i) = *(s_src + i);
		i++;
	}
	return (dst);
}
