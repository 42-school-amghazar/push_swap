/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:28:14 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/27 18:18:51 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *formatted_text, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, formatted_text);
	while (formatted_text[i] != '\0')
	{
		if (formatted_text[i] == '%')
		{
			print_arg(formatted_text[++i], args, &count);
		}
		else
		{
			ft_putchar_fd(formatted_text[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

// | Symbol  | Meaning               |
// | ------- | --------------------- |
// | `-`     | Left align            |
// | `0`     | Zero padding          |
// | `+`     | Always show sign      |
// | `space` | Space before positive |
// | `#`     | Alternative form      |
// | `.`     | Precision             |

/*
%[flags][width].[precision][specifier]

printf("|%5d|", 42);
printf("|%-5d|", 42);
printf("|%05d|", 42);

printf("|%.5d|", 42);
printf("|%8.5d|", 42);
printf("|%08.5d|", 42);
printf("|%-8.5d|", 42);
printf("|%-08.5d|", 42);

printf("|%.0d|", 0);
printf("|%5.0d|", 0);
printf("|%05d|", 0);

NEGATIVE NUMBERS
printf("|%05d|", -42);
printf("|%8.5d|", -42);
printf("|%08.5d|", -42);
*/

// Precision applies before width.

// If precision exists → ignore 0.

// If - exists → ignore 0.

// Sign is handled before zero padding.

// Width never truncates numbers.

// Precision = 0 and value = 0 → print nothing.
