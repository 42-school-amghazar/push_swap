/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:08:29 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/02 16:42:13 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (len == 0 || start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (start + len > ft_strlen(s))
		substring = malloc(ft_strlen(s) - start + 1);
	else
		substring = malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = start;
	while (s[i] != '\0' && i - start < len)
	{
		substring[i - start] = s[i];
		i++;
	}
	substring[i - start] = '\0';
	return (substring);
}
