/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:56:06 by amghazar          #+#    #+#             */
/*   Updated: 2026/01/29 20:07:11 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_pointer;
	const unsigned char	*src_pointer = src;
	size_t				i;

	dest_pointer = dest;
	i = 0;
	while (i < n)
	{
		dest_pointer[i] = src_pointer[i];
		i++;
	}
	return (dest_pointer);
}
