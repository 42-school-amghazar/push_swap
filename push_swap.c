/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavanesy <mavanesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:23:07 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/15 19:07:38 by mavanesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft/libft.h"

void	swap(int *stack, int size)
{
	int	temp;

	if (size < 2)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
}

void	push(int *stack1, int *stack2, int *size1, int *size2)
{
	int	i;

	if (*size2 < 1)
		return ;
	i = *size1;
	while (i > 0)
	{
		stack1[i] = stack1[i - 1];
		i--;
	}
	stack1[0] = stack2[0];
	i = 0;
	while (i < *size2 - 1)
	{
		stack2[i] = stack2[i + 1];
		i++;
	}
	(*size2)--;
	(*size1)++;
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
