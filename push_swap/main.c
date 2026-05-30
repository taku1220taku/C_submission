/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:00:00 by tkono             #+#    #+#             */
/*   Updated: 2026/05/30 19:04:25 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack(t_node **stack)
{
	t_node	*curr;
	t_node	*next;
	t_node	*first;

	if (!stack || !*stack)
		return ;
	first = *stack;
	curr = *stack;
	while (1)
	{
		next = curr->next;
		free(curr);
		curr = next;
		if (curr == first)
			break ;
	}
	*stack = NULL;
}

static void	sort_stack(t_node **a, t_node **b, int size)
{
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
		radix_sort(a, b, size);
}

static int	init_stack(t_node **a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!add_to_stack(a, ft_atoi(argv[i])))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	if (!check_args(argc, argv) || !init_stack(&a, argc, argv)
		||!compress_coordinates(a, argc - 1))
	{
		free_stack(&a);
		write(2, "Error\n", 6);
		return (1);
	}
	if (!is_sorted(a, argc - 1))
		sort_stack(&a, &b, argc - 1);
	free_stack(&a);
	return (0);
}
