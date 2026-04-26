/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sorted_indexes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 17:28:16 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/19 20:08:02 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "push_swap.h"

static int	find_i(int value, t_number **sorted_stack, int size)
{
	int	start_i;
	int	end_i;
	int	middle_i;

	start_i = 0;
	end_i = size - 1;
	while (start_i <= end_i)
	{
		middle_i = (start_i + end_i) / 2;
		if (value == (*sorted_stack)[middle_i].value)
			return (middle_i);
		if (value < (*sorted_stack)[middle_i].value)
			end_i = middle_i - 1;
		else if (value > (*sorted_stack)[middle_i].value)
			start_i = middle_i + 1;
	}
	return (-1);
}

void	set_sorted_indexes(t_number **a, t_number **sorted_stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		(*a)[i].index = find_i((*a)[i].value, sorted_stack, size);
		i++;
	}
}
