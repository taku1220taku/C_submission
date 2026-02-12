/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:19:35 by tkono             #+#    #+#             */
/*   Updated: 2026/02/12 16:21:09 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_formats(va_list *args, const char format);
int	ft_putchar(int c);
int	ft_strlen(const char *s);
int	ft_putnbr_base(unsigned long n, char *base);

int	ft_print_int(int n);
int	ft_print_str(char *str);
int	ft_print_ptr(void *ptr);


#endif
