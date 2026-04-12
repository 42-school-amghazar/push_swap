/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:23:07 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/11 17:08:26 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft/libft.h"

void	rotate(int **stack, int size)
{
	int	last;
	int	i;

	last = (*stack)[size - 1];
	i = size - 1;
	while (i >= 0)
	{
		(*stack)[i] = (*stack)[i - 1];
		i--;
	}
	(*stack)[0] = last;
}

void	reverse_rotate(int **stack, int size)
{
	int	first;
	int	i;

	first = (*stack)[0];
	i = 0;
	while (i < size - 1)
	{
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}
	(*stack)[size - 1] = first;
}
