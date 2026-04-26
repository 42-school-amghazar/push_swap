/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:52:18 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 14:46:30 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_helpers.h"
#include <stdarg.h>

int	print_arg(char conv, va_list args, int *count)
{
	if (conv == 'c')
		*count += print_char(va_arg(args, int));
	else if (conv == 's')
		*count += print_string(va_arg(args, char *));
	else if (conv == 'p')
		*count += print_pointer(va_arg(args, void *));
	else if (conv == 'd' || conv == 'i')
		*count += print_integer(va_arg(args, int));
	else if (conv == 'u')
		*count += print_unsigned_integer(va_arg(args, unsigned int));
	else if (conv == 'x')
		*count += print_hex(va_arg(args, unsigned int), 0);
	else if (conv == 'X')
		*count += print_hex(va_arg(args, unsigned int), 1);
	else if (conv == '%')
	{
		*count += print_char('%');
	}
	return (*count);
}
