/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:22:16 by tkono             #+#    #+#             */
/*   Updated: 2026/05/30 16:54:56 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_rank(int *sorted_arr, int size, int value)
{
	int	low;
	int	high;
	int	mid;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (sorted_arr[mid] == value)
			return (mid);
		if (sorted_arr[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

void	apply_rank(t_node *stack, int *sorted_arr, int size)
{
	t_node	*curr;
	int		i;

	curr = stack;
	i = 0;
	while (i < size)
	{
		curr->data = get_rank(sorted_arr, size, curr->data);
		curr = curr->next;
		i++;
	}
}

static int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	tmp;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] <= pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		j++;
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = tmp;
	return (i + 1);
}

void	quick_sort(int *arr, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}

int	has_duplicate_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] == arr[i + 1])
			return (1);
		i++;
	}
	return (0);
}

// static void	quick_sort(int *arr, int low, int high)
// {
// 	int	pivot;
// 	int	i;
// 	int	j;
// 	int	tmp;

// 	if (low < high)
// 	{
// 		pivot = arr[high];
// 		i = low - 1;
// 		j = low;
// 		while (j < high)
// 		{
// 			if (arr[j] <= pivot)
// 			{
// 				i++;
// 				tmp = arr[i];
// 				arr[i] = arr[j];
// 				arr[j] = tmp;
// 			}
// 			j++;
// 		}
// 		tmp = arr[i + 1];
// 		arr[i + 1] = arr[high];
// 		arr[high] = tmp;
// 		quick_sort(arr, low, i);
// 		quick_sort(arr, i + 2, high);
// 	}
// }
