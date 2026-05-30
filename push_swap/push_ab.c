/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:58:30 by tkono             #+#    #+#             */
/*   Updated: 2026/04/23 15:12:34 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_node(t_node **src, t_node **dst)
{
	t_node	*target;

	if (!src || !*src || !dst)
		return ;
	target = detach_top(src);
	attach_top(dst, target);
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push_node(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push_node(stack_a, stack_b);
	write(1, "pb\n", 3);
}
