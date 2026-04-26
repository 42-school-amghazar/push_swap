/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:23:07 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 14:18:21 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	rra(t_number *a, int size1)
{
	reverse_rotate(&a, size1);
	write(1, "rra\n", 4);
}

void	rrb(t_number *b, int size2)
{
	reverse_rotate(&b, size2);
	write(1, "rrb\n", 4);
}

void	rrr(t_number *a, t_number *b, int size1, int size2)
{
	reverse_rotate(&a, size1);
	reverse_rotate(&b, size2);
	write(1, "rrr\n", 4);
}
