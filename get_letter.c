/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_letter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:20:40 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/23 19:23:19 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	get_upper_letter(unsigned short number)
{
	if (number == 10)
		return ('A');
	else if (number == 11)
		return ('B');
	else if (number == 12)
		return ('C');
	else if (number == 13)
		return ('D');
	else if (number == 14)
		return ('E');
	else
		return ('F');
}

char	get_lower_letter(unsigned short number)
{
	if (number == 10)
		return ('a');
	else if (number == 11)
		return ('b');
	else if (number == 12)
		return ('c');
	else if (number == 13)
		return ('d');
	else if (number == 14)
		return ('e');
	else
		return ('f');
}
