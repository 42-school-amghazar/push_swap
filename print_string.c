/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:00:01 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/27 18:32:02 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "../libft/libft.h"

int	print_string(char *s)
{
	int	i;

	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (i);
}
