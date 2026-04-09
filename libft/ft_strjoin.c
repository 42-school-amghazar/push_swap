/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:54:40 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/02 17:56:02 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	length;
	size_t	i;

	length = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(length + 1);
	if (joined == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		joined[i] = s1[i];
		i++;
	}
	joined[i] = '\0';
	ft_strlcat(joined, (char *)s2, length + 1);
	return (joined);
}
