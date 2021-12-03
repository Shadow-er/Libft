/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:17:33 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/03 10:24:59 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (*lst == 0 && new == 0)
		return;
	if (new == 0)
		return;
	if (*lst == 0)
	{
		*lst = new;
	}
	else
	{
		p = *lst;
		while (p->next)
			p = p->next;
		p->next = new;
	}
}
