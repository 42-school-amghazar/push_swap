/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:08:42 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 19:51:29 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

# include "push_swap.h"

int		get_chunk_size(int stack_size);
int		find_max_position(t_number **stack, int size);
void	rotate_to_top(t_number **stack, int position, char stack_name, int size);
int     find_position_in_chunk(t_number **stack, int min, int max, int size);

#endif // HELPERS_H