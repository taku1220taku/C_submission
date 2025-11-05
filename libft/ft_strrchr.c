/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:15:30 by tkono             #+#    #+#             */
/*   Updated: 2025/11/05 17:34:38 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cc;

	if (!s)
		return (NULL);
	cc = (unsigned char)c;
	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		i--;
		if (s[i] == cc)
			return ((char *)(s + i));
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char s[20] = "kdfjkdjf";
// 	printf("%d\n",ft_strrchr(s,0) == (s + ft_strlen(s)));
// }
