/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:40:24 by mavanesy          #+#    #+#             */
/*   Updated: 2026/04/25 22:44:13 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_number *a, int size1)
{
	swap(a, size1);
	write(1, "sa\n", 3);
}

void	sb(t_number *b, int size2)
{
	swap(b, size2);
	write(1, "sb\n", 3);
}

void	ss(t_number *a, t_number *b, int size1, int size2)
{
	swap(a, size1);
	swap(b, size2);
	write(1, "ss\n", 3);
}