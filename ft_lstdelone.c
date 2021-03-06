/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:26:08 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/03 10:29:37 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void *))
{
	t_list	*p;

	if (lst == 0 || del == 0)
		return ;
	p = lst;
	lst = lst->next;
	del(p->content);
	free(p);
}
