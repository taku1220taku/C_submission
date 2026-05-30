/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_small.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 17:26:24 by tkono             #+#    #+#             */
/*   Updated: 2026/05/30 19:04:08 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min_pos(t_node *stack)
{
	t_node	*curr;
	int		min_val;
	int		min_pos;
	int		i;

	if (!stack)
		return (0);
	min_val = stack->data;
	min_pos = 0;
	curr = stack->next;
	i = 1;
	while (curr != stack)
	{
		if (curr->data < min_val)
		{
			min_val = curr->data;
			min_pos = i;
		}
		curr = curr->next;
		i++;
	}
	return (min_pos);
}

static void	push_min_to_b(t_node **a, t_node **b, int size)
{
	int	min_pos;

	min_pos = get_min_pos(*a);
	if (min_pos <= size / 2)
	{
		while (min_pos > 0)
		{
			ra(a);
			min_pos--;
		}
	}
	else
	{
		while (min_pos < size)
		{
			rra(a);
			min_pos++;
		}
	}
	pb(a, b);
}

void	sort_three(t_node **a)
{
	int	v0;
	int	v1;
	int	v2;

	v0 = (*a)->data;
	v1 = (*a)->next->data;
	v2 = (*a)->next->next->data;
	if (v0 > v1 && v1 < v2 && v0 < v2)
		sa(a);
	else if (v0 > v1 && v1 > v2)
	{
		sa(a);
		rra(a);
	}
	else if (v0 > v1 && v1 < v2 && v0 > v2)
		ra(a);
	else if (v0 < v1 && v1 > v2 && v0 < v2)
	{
		sa(a);
		ra(a);
	}
	else if (v0 < v1 && v1 > v2 && v0 > v2)
		rra(a);
}

void	sort_four(t_node **a, t_node **b)
{
	push_min_to_b(a, b, 4);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_node **a, t_node **b)
{
	push_min_to_b(a, b, 5);
	push_min_to_b(a, b, 4);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
