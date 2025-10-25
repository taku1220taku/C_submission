/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:26:27 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 18:23:35 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return ((-1) * n);
	return (n);
}

void	ft_strreverse(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		++i;
		--j;
	}
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*str;
	int		is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	str = (char *)malloc(11 + is_negative);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_negative)
		str[length] = '-';
	++length;
	str[length] = '\0';
	ft_strreverse(str);
	return (str);
}

// int main()
// {
// 	int n = -2147483648;
// 	printf("%s",)
// }
