/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:31:28 by amghazar          #+#    #+#             */
/*   Updated: 2026/01/28 20:26:29 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_pointer;
	const unsigned char	*src_pointer = src;
	size_t				i;

	dest_pointer = dest;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			dest_pointer[i] = src_pointer[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_pointer[i] = src_pointer[i];
		}
	}
	return (dest_pointer);
}
