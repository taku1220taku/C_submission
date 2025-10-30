/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:14:19 by tkono             #+#    #+#             */
/*   Updated: 2025/10/28 18:02:19 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			i;

	if (s1 == NULL || s2 == NULL)
		return (-1);
	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		++i;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "d";
// 	char *d = "";
// 	printf("%d", ft_memcmp(s,d,0));
// }
