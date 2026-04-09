/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:44:48 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/12 16:19:54 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_pointer;
	unsigned char	*s2_pointer;
	size_t			i;

	s1_pointer = (unsigned char *)s1;
	s2_pointer = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_pointer[i] != s2_pointer[i])
		{
			return ((unsigned char)s1_pointer[i]
				- (unsigned char)s2_pointer[i]);
		}
		i++;
	}
	return (0);
}
