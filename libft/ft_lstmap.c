/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amghazar <amghazar@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:56:08 by amghazar          #+#    #+#             */
/*   Updated: 2026/02/13 23:51:05 by amghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_current;
	t_list	*head;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	current = lst;
	head = ft_lstnew(f(current->content));
	if (head == NULL)
		return (NULL);
	head->next = current->next;
	current = lst->next;
	new_current = head;
	while (current != NULL)
	{
		new_current->next = ft_lstnew(f(current->content));
		if (new_current->next == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		current = current->next;
		new_current = new_current->next;
	}
	return (head);
}
