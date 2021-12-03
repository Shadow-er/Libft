/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:56:15 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/03 11:03:25 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list	**lst, t_list *new)
{
	if (*lst == 0 || new == 0)
		return ;
	new->next = *lst;
	*lst = new;
}
