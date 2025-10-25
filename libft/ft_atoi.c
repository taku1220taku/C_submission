/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:01:53 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 18:24:21 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (ft_isspace(s[i]))
		++i;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		++i;
	}
	while ('0' <= s[i] && s[i] <= '9')
		sum = sum * 10 + (s[i++] - '0');
	return (sum * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	const char *s = "   \n\v --2147483648";
// 	s = NULL;
// 	printf("%d\n", ft_atoi(s));
// 	printf("%d", atoi(s));
// }
