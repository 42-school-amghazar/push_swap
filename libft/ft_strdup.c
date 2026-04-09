/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 23:16:50 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/12 16:52:30 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*target;
	int		i;

	target = malloc((ft_strlen(s) + 1));
	if (target == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		target[i] = s[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
