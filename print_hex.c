/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:59:05 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 14:51:51 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include "printf_helpers.h"

static void	reverse_str(char *s, int length)
{
	int	i;
	int	temp;

	i = 0;
	while (i < length / 2)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - 1 - i] = temp;
		i++;
	}
}

static void	get_hex(unsigned long long number, int is_upper, char result[17])
{
	short			i;
	unsigned short	reminder;

	i = 0;
	if (number == 0)
		result[i++] = '0';
	while (number != 0)
	{
		reminder = number % 16;
		if (reminder > 9)
		{
			if (is_upper)
				result[i] = get_upper_letter(reminder);
			else
				result[i] = get_lower_letter(reminder);
		}
		else
			result[i] = reminder + '0';
		number /= 16;
		i++;
	}
	result[i] = '\0';
	reverse_str(result, ft_strlen(result));
}

int	print_hex(unsigned long long number, int is_upper)
{
	char	hex[17];

	get_hex(number, is_upper, hex);
	ft_putstr_fd(hex, 1);
	return (ft_strlen(hex));
}
