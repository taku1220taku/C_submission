/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:08:29 by tkono             #+#    #+#             */
/*   Updated: 2026/04/23 15:12:30 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	swap_stack(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap_stack(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	swap_stack(a);
	swap_stack(b);
	write(1, "ss\n", 3);
}
