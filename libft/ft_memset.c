/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:48:33 by amghazar          #+#    #+#             */
/*   Updated: 2026/01/29 20:07:28 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = s;
	i = 0;
	while (i < n)
	{
		pointer[i] = (unsigned char)c;
		i++;
	}
	return (pointer);
}
