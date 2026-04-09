/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:41:14 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/11 00:12:54 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static size_t	get_digits_number(int n)
{
	unsigned short	digits_number;
	int				i;

	digits_number = 0;
	i = n;
	while (i != 0)
	{
		i /= 10;
		digits_number++;
	}
	return (digits_number);
}

static char	*get_num_str(int n, size_t digits_number)
{
	char	*int_str;
	int		i;
	int		j;

	if (n < 0)
	{
		i = -n;
	}
	else
		i = n;
	int_str = malloc(digits_number + 1);
	if (int_str == NULL)
		return (NULL);
	j = digits_number - 1;
	while (j >= 0)
	{
		int_str[j] = i % 10 + '0';
		i /= 10;
		if (n < 0 && j == 0)
			int_str[j] = '-';
		j--;
	}
	int_str[digits_number] = '\0';
	return (int_str);
}

char	*ft_itoa(int n)
{
	size_t	digits_number;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits_number = get_digits_number(n);
	if (n < 0)
		digits_number++;
	return (get_num_str(n, digits_number));
}
