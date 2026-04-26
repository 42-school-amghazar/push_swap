/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:02:09 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 14:49:11 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft/libft.h"
#include "printf_helpers.h"

int	print_integer(int integer)
{
	char	*integer_str;
	int		count;

	integer_str = ft_itoa(integer);
	count = print_string(integer_str);
	free(integer_str);
	return (count);
}
