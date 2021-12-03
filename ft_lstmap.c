/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:41:21 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/11/11 07:45:47 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>
#include<stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*head;

	if (!f || !lst)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	t = head;
	while (lst->next)
	{
		lst = lst->next;
		t->next = ft_lstnew(f(lst->content));
		if (!t->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		t = t->next;
	}
	return (head);
}
