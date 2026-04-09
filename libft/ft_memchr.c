/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:34:22 by amghazar          #+#    #+#             */
/*   Updated: 2026/01/31 15:28:24 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_pointer;
	unsigned char	character;
	size_t			i;

	char_pointer = (unsigned char *)s;
	character = c;
	i = 0;
	while (i < n)
	{
		if (char_pointer[i] == character)
		{
			return (&char_pointer[i]);
		}
		i++;
	}
	return (NULL);
}
