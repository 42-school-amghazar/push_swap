/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:08:42 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 00:34:30 by amghazar         ###   ########.fr       */
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
void	push(t_number *stack1, t_number *stack2, int size1, int size2);
void	rotate(t_number **stack, int size);
void	reverse_rotate(t_number **stack, int size);
void	sa(t_number *a, int size1);
void	sb(t_number *b, int size2);
void	ss(t_number *a, t_number *b, int size1, int size2);
void	pa(t_number *a, t_number *b, int size1, int size2);
void	pb(t_number *a, t_number *b, int size1, int size2);
void	ra(t_number *a, int size1);
void	rb(t_number *b, int size2);
void	rr(t_number *a, t_number *b, int size1, int size2);
void	rra(t_number *a, int size1);
void	rrb(t_number *b, int size2);
void	rrr(t_number *a, t_number *b, int size1, int size2);
void	set_sorted_indexes(t_number **a, t_number **sorted_stack, int size);
void	push_swap(t_number **a, t_number **b, int size);

int		first_handle(char *str);
long	error_handle(const char *str);


#endif // PUSH_SWAP_H