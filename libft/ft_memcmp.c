/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:14:19 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 15:52:40 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	unsigned int	i;

	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (i < n)
	{
		if (*(us1 + i) != *(us2 + i))
			return (*(us1 + i) - *(us2 + i));
		++i;
	}
	return (0);
}
