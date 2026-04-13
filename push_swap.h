/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavanesy <mavanesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:08:42 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/13 18:01:38 by mavanesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

void	rotate(int **stack, int size);
void	reverse_rotate(int **stack, int size);
void	swap(int *stack, int size);
void	push(int *stack1, int *stack2, int *size1, int *size2);


#endif // PUSH_SWAP_H