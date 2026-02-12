/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:23:06 by tkono             #+#    #+#             */
/*   Updated: 2026/02/12 17:11:56 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_formats(va_list *args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(*args, int));
	else if (format == 's')
		len += ft_print_str(va_arg(*args, char *));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(*args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_print_int(va_arg(*args, int));
	else if (format == 'u')
		len += ft_putnbr_base(va_arg(*args, unsigned int), "0123456789");
	else if (format == 'x')
		len += ft_putnbr_base(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		len += ft_putnbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_formats(&args, format[i]);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	ft_printf(" %p %p \n", NULL, NULL);
// 	printf(" %p %p ", NULL, NULL);
// 	// printf(" %p %p ", 0, 0);
// }
