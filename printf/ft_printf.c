/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:23:06 by tkono             #+#    #+#             */
/*   Updated: 2026/02/26 19:48:17 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(va_list *args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(*args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(*args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_int(va_arg(*args, int)));
	else if (format == 'u')
		return (ft_putnbr_base(va_arg(*args, unsigned int), "0123456789"));
	else if (format == 'x')
		return (ft_putnbr_base(va_arg(*args, unsigned int),
				"0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_base(va_arg(*args, unsigned int),
				"0123456789ABCDEF"));
	else if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

static int	ft_process(const char **fmt, va_list *args)
{
	int	tmp;

	if (**fmt == '%')
	{
		(*fmt)++;
		if (!**fmt)
			return (0);
		tmp = ft_formats(args, **fmt);
	}
	else
		tmp = write(1, *fmt, 1);
	return (tmp);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		tmp;

	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		tmp = ft_process(&format, &args);
		if (tmp == -1)
		{
			va_end(args);
			return (-1);
		}
		len += tmp;
		if (*format)
			format++;
	}
	va_end(args);
	return (len);
}
