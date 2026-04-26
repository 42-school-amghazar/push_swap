/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:27:22 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 19:51:29 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_chunk_size(int stack_size)
{
	if (stack_size < 5)
		return (stack_size);
	if (stack_size <= 100)
		return (stack_size / 5);
	else if (stack_size <= 500)
		return (stack_size / 10);
	return (20);
}

int	find_max_position(t_number **stack, int size)
{
	int	max;
	int	position;
	int	i;

	max = -1;
	position = 0;
	i = 0;
	while (i < size)
	{
		if ((*stack)[i].index > max)
		{
			max = (*stack)[i].index;
			position = i;
		}
		i++;
	}
	return (position);
}

void	rotate_to_top(t_number **stack, int position, char stack_name, int size)
{
	int	i;
	
	if (position <= size / 2)
	{
		i = 0;
		while (i < position)
		{
			if (stack_name == 'a')
				ra(*stack, size);
			else
				rb(*stack, size);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < size - position)
		{
			if (stack_name == 'a')
				rra(*stack, size);
			else
				rrb(*stack, size);
			i++;
		}
	}
}

int	find_position_in_chunk(t_number **stack, int min, int max, int size)
{
	int	i = 0;

	while (i < size)
	{
		if ((*stack)[i].index >= min && (*stack)[i].index <= max)
			return (i);
		i++;
	}
	return (-1);
}