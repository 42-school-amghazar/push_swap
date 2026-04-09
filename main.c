/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:06:03 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/08 23:25:05 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"

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
	// get stack a as int *arr
	// hasError() -> not integers, integers outside the valid range, or duplicate values
	//
}
