/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:02:00 by tkono             #+#    #+#             */
/*   Updated: 2026/02/15 11:40:48 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		*(str + i) = 0;
		i++;
	}
}

// #include <strings.h>
// #include <stdio.h>

// int main()
// {
// 	// void *p = malloc(sizeof(char) * 5);
// 	// ft_bzero(p, 6);
// 	// printf("%s\n",(char *)p);
// 	void *pp = malloc(sizeof(char) * 5);
// 	bzero(pp,6);
// 	printf("%c",((char *)pp)[5]);
// }
