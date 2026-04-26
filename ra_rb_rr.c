/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:02:13 by mavanesy          #+#    #+#             */
/*   Updated: 2026/04/26 14:18:21 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	ra(t_number *a, int size1)
{
	rotate(&a, size1);
	write(1, "ra\n", 3);
}

void	rb(t_number *b, int size2)
{
	rotate(&b, size2);
	write(1, "rb\n", 3);
}

void	rr(t_number *a, t_number *b, int size1, int size2)
{
	rotate(&a, size1);
	rotate(&b, size2);
	write(1, "rr\n", 3);
}