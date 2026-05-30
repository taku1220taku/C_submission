/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 16:10:00 by tkono             #+#    #+#             */
/*   Updated: 2026/05/30 19:04:32 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compress_coordinates(t_node *stack, int size)
{
	int		*tmp_arr;
	int		i;
	t_node	*curr;

	if (!stack)
		return (0);
	tmp_arr = malloc(sizeof(int) * size);
	if (!tmp_arr)
		return (0);
	curr = stack;
	i = 0;
	while (i < size)
	{
		tmp_arr[i++] = curr->data;
		curr = curr->next;
	}
	quick_sort(tmp_arr, 0, size - 1);
	if (has_duplicate_sorted(tmp_arr, size))
	{
		free(tmp_arr);
		return (0);
	}
	apply_rank(stack, tmp_arr, size);
	free(tmp_arr);
	return (1);
}

void	radix_sort(t_node **a, t_node **b, int size)
{
	int	max_bits;
	int	i;
	int	j;

	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->data >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
