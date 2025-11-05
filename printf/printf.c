/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:23:06 by tkono             #+#    #+#             */
/*   Updated: 2025/11/05 18:41:21 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc, free, write,
// va_start, va_arg, va_copy, va_endつかえる

#include <stdarg.h>
#include <stdio.h>

int	exec_print(char symbol, va_list args)
{
	//use va_arg
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
			len += exec_print(format[i], args);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
