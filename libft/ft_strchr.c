/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:39:23 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/12 16:51:55 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char			*pointer;
	unsigned char	character;
	int				i;

	pointer = (char *)s;
	character = c;
	i = 0;
	while (pointer[i] != '\0')
	{
		if (pointer[i] == character)
			return (&pointer[i]);
		i++;
	}
	if (pointer[i] == character)
		return (&pointer[i]);
	return (NULL);
}
