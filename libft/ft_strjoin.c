/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:02:02 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 21:06:37 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(*s1) * (len));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
	{
		str[j++] = s1[i];
	}
	i = -1;
	while (s2[++i])
	{
		str[j++] = s2[i];
	}
	str[j] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strjoin("hello ", "world!"));
// }
