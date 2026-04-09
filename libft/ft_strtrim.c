/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:54:05 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/12 17:22:33 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_length;
	int		start;
	int		end;

	if (s1[0] == '\0')
		return (ft_strdup(""));
	str_length = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0')
	{
		if (ft_strchr(set, s1[start]) != NULL)
			start++;
		else
			break ;
	}
	end = str_length - 1;
	while (s1[end] >= 0)
	{
		if (ft_strchr(set, s1[end]) != NULL)
			end--;
		else
			break ;
	}
	return (ft_substr(s1, start, end - start + 1));
}
