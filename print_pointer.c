/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:11:05 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 14:51:51 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "printf_helpers.h"

int	print_pointer(void *pointer)
{
	if (pointer == NULL)
	{
		return (print_string("(nil)"));
	}
	return (print_string("0x") + print_hex((unsigned long long)pointer, 0));
}
