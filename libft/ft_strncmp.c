/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:14:50 by tkono             #+#    #+#             */
/*   Updated: 2025/10/22 18:15:11 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strcmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		++i;
	}
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
