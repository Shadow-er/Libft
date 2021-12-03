/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:29:16 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/03 10:31:31 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strln(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	k;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strln(dst);
	k = ft_strln((char *)src);
	if (dstsize <= i)
		return (dstsize + ft_strln((char *)src));
	while (*src && j < dstsize - i - 1)
	{
		*(dst + i) = *src;
		dst++;
		src++;
		j++;
	}
	*(dst + i) = '\0';
	return (i + k);
}
