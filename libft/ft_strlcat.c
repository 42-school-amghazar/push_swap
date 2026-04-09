/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:37:57 by amghazar          #+#    #+#             */
/*   Updated: 2026/01/31 16:51:00 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_length;
	size_t	s_length;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	d_length = i;
	j = 0;
	s_length = ft_strlen(src);
	if (d_length >= size)
		return (s_length + size);
	j = 0;
	while (j + 1 < size - d_length && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_length + s_length);
}
