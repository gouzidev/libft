/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:11:34 by sgouzi            #+#    #+#             */
/*   Updated: 2023/11/05 23:15:13 by sgouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr_old_lst;

	ptr_old_lst = lst;
	head = lst;
	if (lst)
	{
		head = ft_lstnew((*f)(head->content));
		while (lst->next)
		{
			ft_lstadd_back(&head, ft_lstnew((*f)(lst->next->content)));
			lst = lst->next;
		}
	}
	ft_lstclear(&ptr_old_lst, del);
	return (head);
}
