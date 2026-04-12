/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monika <monika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:23:07 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/12 22:17:41 by monika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft/libft.h"

void	swap(int *stack, int size)
{
	int	temp;
	
	if (size < 2)
		return ;
	temp = stack[size - 1];
	stack[size - 1] = stack[size -2];
	stack[size - 2] = temp;
}

void	push(int *stack1,int *stack2, int *size1, int *size2)
{
	int temp;

	if (*size2 < 1)
		return ;
	temp = stack2[*size2 - 1];
	(*size2)--;
	(*size1)++;
	stack1[*size1 - 1] = temp;
}

void	reverse_rotate(int **stack, int size)
{
	int	last;
	int	i;

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

void	rotate(int **stack, int size)
{
	int	first;
	int	i;

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
