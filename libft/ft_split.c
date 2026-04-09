/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:54:53 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/12 14:19:11 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	get_str_count(char const *s, char c)
{
	size_t	c_count;
	size_t	i;

	c_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			c_count++;
		}
		i++;
	}
	return (c_count);
}

static size_t	get_str_length(char const *s, char c)
{
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		length++;
		i++;
	}
	return (length);
}

static void	free_prev(char **splitted, size_t breaking_str_i)
{
	size_t	i;

	i = 0;
	while (i < breaking_str_i)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
}

static	char	*generate_string(char const *s, size_t *i, char c)
{
	char		*splitted;
	size_t		k;

	splitted = ft_calloc(get_str_length(s + *i, c) + 1, 1);
	if (splitted == NULL)
		return (NULL);
	k = 0;
	while (s[*i] != '\0' && s[*i] != c)
	{
		splitted[k++] = s[*i];
		(*i)++;
	}
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	i;
	size_t	j;

	splitted = ft_calloc((get_str_count(s, c) + 1), sizeof(char *));
	if (splitted == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			splitted[j] = generate_string(s, &i, c);
			if (splitted[j] == NULL)
				return (free_prev(splitted, j), NULL);
			j++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (splitted);
}
