/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:52:02 by mavanesy          #+#    #+#             */
/*   Updated: 2026/04/26 14:53:34 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	pa(t_number *a, t_number *b, int size1, int size2)
{
	push(a, b, size1, size2);
	write(1, "pa\n", 3);
}

void	pb(t_number *a, t_number *b, int size1, int size2)
{
	push(b, a, size2, size1);
	write(1, "pb\n", 3);
}