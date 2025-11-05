/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:26:27 by tkono             #+#    #+#             */
/*   Updated: 2025/11/05 16:44:22 by tkono            ###   ########.fr       */
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

static size_t	count_digit(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

static char	*make_str(int is_negative, int n, size_t *nlen)
{
	char	*str;

	*nlen = count_digit(n);
	str = (char *)malloc(sizeof(char) * (*nlen + is_negative + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	length;
	size_t	nlen;
	char	*str;
	int		is_negative;

	if (n == 0)
		return (ft_strdup("0"));
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	str = make_str(is_negative, n, &nlen);
	if (!str)
		return (NULL);
	str[nlen + is_negative] = '\0';
	length = nlen + is_negative - 1;
	while (n != 0)
	{
		str[length--] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_negative)
		str[length] = '-';
	return (str);
}

// int main()
// {
// 	int n = -11232;
// 	printf("%s\n",ft_itoa(n));
// }
