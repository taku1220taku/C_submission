/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:23:52 by tkono             #+#    #+#             */
/*   Updated: 2026/02/26 18:42:59 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long n, char *base)
{
	int					count;
	int					tmp;
	unsigned long long	base_len;

	count = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		tmp = ft_putnbr_base(n / base_len, base);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	tmp = ft_putchar(base[n % base_len]);
	if (tmp == -1)
		return (-1);
	count += tmp;
	return (count);
}
