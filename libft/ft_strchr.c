/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:06:11 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 16:10:25 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	unsigned int	len;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		++i;
	}
	return (NULL);
}
