/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:08:42 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/16 22:54:35 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct number
{
	int	value;
	int	index;
}	t_number;

void	swap(t_number *stack, int size);
void	push(t_number *stack1, t_number *stack2, int *size1, int *size2);
void	rotate(t_number **stack, int size);
void	reverse_rotate(t_number **stack, int size);

#endif // PUSH_SWAP_H