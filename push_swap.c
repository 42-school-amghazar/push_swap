/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:23:07 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 20:18:24 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft/libft.h"
#include "push_swap.h"
#include "helpers.h"
#include "ft_printf.h"

void	swap(t_number *stack, int size)
{
	t_number	temp;

	if (size < 2)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
}

void	push(t_number *stack1, t_number *stack2, int size1, int size2)
{
	int	i;

	if (size2 < 1)
		return ;
	i = size1;
	while (i > 0)
	{
		stack1[i] = stack1[i - 1];
		i--;
	}
	stack1[0] = stack2[0];
	i = 0;
	while (i < size2 - 1)
	{
		stack2[i] = stack2[i + 1];
		i++;
	}
	(size2)--;
	(size1)++;
}

void	rotate(t_number **stack, int size)
{
	t_number	first;
	int			i;

	if (size < 2)
		return ;
	first = (*stack)[0];
	i = 0;
	while (i < size - 1)
	{
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}
	(*stack)[size - 1] = first;
}

void	reverse_rotate(t_number **stack, int size)
{
	t_number	last;
	int			i;

	if (size < 2)
		return ;
	last = (*stack)[size - 1];
	i = size - 1;
	while (i > 0)
	{
		(*stack)[i] = (*stack)[i - 1];
		i--;
	}
	(*stack)[0] = last;
}

void	push_swap(t_number **a, t_number **b, int size)
{
	int	chunk_size;
	int	min;
	int	max;
	int	current_index;
	int	position;
	int	a_size;
	int	b_size;

	chunk_size = get_chunk_size(size);
	min = 0;
	max = chunk_size - 1;
	a_size = size;
	b_size = 0;
	while (a_size > 0)
	{
		// ft_printf("%d %d %d\n", min, max, (*a)[0].index);
		if ((*a)[0].index >= min && (*a)[0].index <= max)
		{
			current_index = (*a)[0].index;
			pb(*a, *b, a_size, b_size);
			a_size--;
			b_size++;
			if (current_index < (min + max) / 2)
				rb(*b, b_size);
			min++;
			max = min + chunk_size - 1;
		}
		else
		{
			position = find_position_in_chunk(a, min, max, a_size);

			if (position == -1)
			{
				ra(*a, a_size);
				max += chunk_size;
			}
			else
				rotate_to_top(a, position, 'a', a_size);
		}
	}

	max = 0;
	while (b_size > 0)
	{
		max = find_max_position(b, b_size);
		rotate_to_top(b, max, 'b', b_size);
		pa(*a, *b, a_size, b_size);
		a_size++;
		b_size--;
	}
	// a rotation
}
