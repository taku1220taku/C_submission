/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:27:23 by tkono             #+#    #+#             */
/*   Updated: 2026/02/26 18:58:03 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int			count;
	int			tmp;
	long long	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		tmp = ft_putchar('-');
		if (tmp == -1)
			return (-1);
		count += tmp;
		num = -num;
	}
	tmp = ft_putnbr_base(num, "0123456789");
	if (tmp == -1)
		return (-1);
	count += tmp;
	return (count);
}
