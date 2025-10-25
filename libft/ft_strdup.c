/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:10:39 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 15:23:36 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	if (!s1)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len + 1);
	return (s2);
}
