/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:13:18 by tkono             #+#    #+#             */
/*   Updated: 2026/05/30 19:04:23 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_node **stack_top)
{
	if (*stack_top)
		*stack_top = (*stack_top)->next;
}

void	reverse_rotate_stack(t_node **stack_top)
{
	if (*stack_top)
		*stack_top = (*stack_top)->prev;
}

void	swap_stack(t_node **stack_top)
{
	int		tmp;
	t_node	*next;

	if (!*stack_top || (*stack_top)->next == *stack_top)
		return ;
	tmp = (*stack_top)->data;
	next = (*stack_top)->next;
	(*stack_top)->data = next->data;
	next->data = tmp;
}

t_node	*detach_top(t_node **stack)
{
	t_node	*target;

	target = *stack;
	if (target->next == target)
		*stack = NULL;
	else
	{
		target->prev->next = target->next;
		target->next->prev = target->prev;
		*stack = target->next;
	}
	target->next = target;
	target->prev = target;
	return (target);
}

void	attach_top(t_node **stack, t_node *node)
{
	if (!*stack)
	{
		node->next = node;
		node->prev = node;
		*stack = node;
	}
	else
	{
		node->next = *stack;
		node->prev = (*stack)->prev;
		node->prev->next = node;
		(*stack)->prev = node;
		*stack = node;
	}
}
