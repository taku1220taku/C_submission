/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:23:52 by tkono             #+#    #+#             */
/*   Updated: 2026/02/13 19:15:15 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long n, char *base)
{
	int				count;
	unsigned int	base_len;

	count = 0;
	base_len = ft_strlen(base);

	if (n >= base_len)
		count += ft_putnbr_base(n / base_len, base);

	count += ft_putchar(base[n % base_len]);

	return (count);
}
// #include <stdio.h>
// int main()
// {
// 	printf("\n%d",ft_putnbr_base(1234,"0123456789"));
// }
