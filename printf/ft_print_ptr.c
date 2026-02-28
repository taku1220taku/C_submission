/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:34:50 by tkono             #+#    #+#             */
/*   Updated: 2026/02/26 18:49:36 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int					count;
	int					tmp;
	unsigned long long	addr;

	if (!ptr)
		return (ft_print_str("(nil)"));
	count = 0;
	addr = (unsigned long long)ptr;
	tmp = ft_print_str("0x");
	if (tmp == -1)
		return (-1);
	count += tmp;
	tmp = ft_putnbr_base(addr, "0123456789abcdef");
	if (tmp == -1)
		return (-1);
	count += tmp;
	return (count);
}
