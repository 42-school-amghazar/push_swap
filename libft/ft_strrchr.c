/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:12:44 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/02 14:02:30 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*pointer;
	int				i;
	char			*occ_pointer;
	unsigned char	character;

	pointer = (char *)s;
	character = (unsigned char)c;
	occ_pointer = NULL;
	i = 0;
	while (pointer[i] != '\0')
	{
		if (pointer[i] == character)
		{
			occ_pointer = &pointer[i];
		}
		i++;
	}
	if (pointer[i] == character)
		return (&pointer[i]);
	return (occ_pointer);
}
