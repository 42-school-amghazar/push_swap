/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:01:22 by monika            #+#    #+#             */
/*   Updated: 2026/04/26 00:26:24 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

int	*step_copy(t_number *arr, int size)
{
    int	*copy;
    int	i;

    i = 0;
    copy = malloc(sizeof(int) * size);
    if (!copy)
        return (NULL);
    while (i < size)
    {
        copy[i] = arr[i].value;
        i++;
    }
    return (copy);
}