/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:23:59 by tkono             #+#    #+#             */
/*   Updated: 2025/10/28 18:00:11 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstlast;

	if (lst)
	{
		if (*lst)
		{
			lstlast = ft_lstlast(*lst);
			lstlast->next = new;
		}
		else
			*lst = new;
	}
}
