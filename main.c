/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:06:03 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/11 22:36:00 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int i;
	int j;

	a = malloc(argc - 1);

	i = 1;
	j = 0;
	while (i < argc)
	{
		a[j] = ft_atoi(argv[i]);
		printf("%d ", a[j]);
		j++;
		i++;
	}

	// rotate(&a, argc - 1);
	reverse_rotate(&a, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		printf("%d ", a[i]);
		i++;
	}
	// get stack a as int *arr
	// hasError() -> not integers, integers outside the valid range, or duplicate values
	//
}

/*
1 3 2 7 15 10 4

size / 2 * pb -> [4, 10, 15] -> b stack | [1, 3, 2, 7] -> a stack
if size > 1 -> repeat



*/
