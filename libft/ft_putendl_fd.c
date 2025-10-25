/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:06:30 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 16:10:01 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	if (!s)
		return ;
	nl = '\n';
	ft_putstr_fd(s, fd);
	write(1, &nl, sizeof(char));
}
