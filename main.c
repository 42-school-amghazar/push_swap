/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:06:03 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 19:51:29 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"
#include "push_swap.h"
#include "merge_sort.h"

int	main(int argc, char **argv)
{
	t_number	*a;
	t_number	*a_copy;
	t_number	*b;
	int 		i;
	int 		j;
	t_number	*sorted_stack;

	a = malloc(sizeof(t_number) * (argc - 1));
	a_copy = malloc(sizeof(t_number) * (argc - 1));
	b = malloc(sizeof(t_number) * (argc - 1));

	i = 1;
	j = 0;
	while (i < argc)
	{
		a[j].value = ft_atoi(argv[i]);
		printf("%d ", a[j].value);
		j++;
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		a_copy[i] = a[i];
		i++;
	}
	sorted_stack = merge_sort(&a_copy, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		printf("\n%d ", sorted_stack[i].value);
		// printf("%d ", a[i].value);
		i++;
	}
	set_sorted_indexes(&a, &sorted_stack, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		// printf("\n%d ", a[i].value);
		printf("value %d, index %d\n", a[i].value, a[i].index);
		i++;
	}
	// hasError() -> not integers, integers outside the valid range, or duplicate values
	push_swap(&a, &b, argc - 1);

	i = 0;
	while (i < argc - 1)
	{
		// printf("\n%d ", a[i].value);
		printf("value %d, index %d\n", a[i].value, a[i].index);
		i++;
	}
	free(a);
	free(a_copy);
}

/*
1 3 2 7 15 10 4

size / 2 * pb -> [4, 10, 15] -> b stack | [1, 3, 2, 7] -> a stack
if size > 1 -> repeat



*/
