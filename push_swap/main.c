/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:00:00 by tkono             #+#    #+#             */
/*   Updated: 2026/05/30 17:29:23 by tkono            ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		i;

	if (argc < 2)
		return (0);
	if (!check_args(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	a = NULL;
	b = NULL;
	i = 1;
	while (i < argc)
	{
		if (!add_to_stack(&a, ft_atoi(argv[i])))
		{
			free_stack(&a);
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}

	if (!compress_coordinates(a, argc - 1))
	{
		free_stack(&a);
		write(2, "Error\n", 6);
		return (1);
	}

	if (is_sorted(a, argc - 1))
	{
		free_stack(&a);
		return (0);
	}

	if (argc - 1 == 2)
		sa(&a);
	else if (argc - 1 == 3)
		sort_three(&a);
	else if (argc - 1 == 4)
		sort_four(&a, &b);
	else if (argc - 1 == 5)
		sort_five(&a, &b);
	else
		radix_sort(&a, &b, argc - 1);
	free_stack(&a);
	return (0);
}
