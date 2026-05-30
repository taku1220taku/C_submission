/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:13:10 by tkono             #+#    #+#             */
/*   Updated: 2026/05/30 17:28:40 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;
void	rotate_stack(t_node **stack_top);
void	reverse_rotate_stack(t_node **stack_top);
void	swap_stack(t_node **stack_top);
t_node	*detach_top(t_node **stack);
void	attach_top(t_node **stack, t_node *node);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
int		get_rank(int *sorted_arr, int size, int value);
void	apply_rank(t_node *stack, int *sorted_arr, int size);
int		has_duplicate_sorted(int *arr, int size);
void	quick_sort(int *arr, int low, int high);
int		compress_coordinates(t_node *stack, int size);
void	radix_sort(t_node **a, t_node **b, int size);
int		ft_atoi(const char *s);
int		check_args(int argc, char **argv);
int		is_sorted(t_node *stack, int size);
void	sort_three(t_node **a);
void	sort_four(t_node **a, t_node **b);
void	sort_five(t_node **a, t_node **b);
int		add_to_stack(t_node **stack, int val);

#endif
