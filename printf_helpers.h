/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_helpers.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:06:56 by amghazar          #+#    #+#             */
/*   Updated: 2026/04/26 14:46:30 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_HELPERS_H
# define PRINTF_HELPERS_H

int		print_char(char c);
int		print_string(char *s);
int		print_integer(int integer);
int		print_unsigned_integer(unsigned int integer);
int		print_hex(unsigned long long number, int is_upper);
int		print_pointer(void *pointer);
int		print_percent(void);
char	*utoa(unsigned int n);
char	get_upper_letter(unsigned short number);
char	get_lower_letter(unsigned short number);

#endif // PRINTF_HELPERS_H