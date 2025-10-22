/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:03:51 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 16:05:52 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	character;
	unsigned int	i;

	if (b == NULL)
		return (NULL);
	i = 0;
	p = (unsigned char *)b;
	character = (unsigned char)c;
	while (i < len)
	{
		*(p + i) = character;
		i++;
	}
	return (b);
}
