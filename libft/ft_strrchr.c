/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:15:30 by tkono             #+#    #+#             */
/*   Updated: 2026/02/15 13:32:25 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	char			*last;

	uc = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*((unsigned char *)s) == uc)
			last = (char *)s;
		s++;
	}
	if (*((unsigned char *)s) == uc)
		return ((char *)s);
	return (last);
}

// #include <stdio.h>
// int main()
// {
// 	char s[20] = "kdfjkdjf";
// 	printf("%d\n",ft_strrchr(s,0) == (s + ft_strlen(s)));
// }
