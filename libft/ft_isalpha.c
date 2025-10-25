/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:02:18 by tkono             #+#    #+#             */
/*   Updated: 2025/10/25 17:40:32 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (('a' <= uc && uc <= 'z') || ('A' <= uc && uc <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int c = 70;
// 	printf("%c", c);
// }
