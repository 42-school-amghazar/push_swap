/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_integer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:08:09 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 14:51:51 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "printf_helpers.h"

int	print_unsigned_integer(unsigned int integer)
{
	char	*integer_str;
	int		count;

	integer_str = utoa(integer);
	count = print_string(integer_str);
	free(integer_str);
	return (count);
}
