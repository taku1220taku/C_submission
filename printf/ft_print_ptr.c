/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:34:50 by tkono             #+#    #+#             */
/*   Updated: 2026/02/12 16:56:24 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int					count;
	unsigned long long	addr;

	count = 0;
	addr = (unsigned long long)ptr;

	if (!ptr)
		return (ft_print_str("(nil)"));

	count += ft_print_str("0x");

	count += ft_putnbr_base(addr, "0123456789abcdef");

	return (count);
}
