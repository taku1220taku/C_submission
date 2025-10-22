/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:15:30 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 18:15:49 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i > -1)
	{
		if (s[i] == c)
			return (&s[i]);
		--i;
	}
	return (0);
}
