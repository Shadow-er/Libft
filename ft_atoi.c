/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:31:29 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/11/11 07:40:31 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long long	re;
	int					j;
	char				*p;

	j = 1;
	re = 0;
	p = (char *)str;
	while ((*p >= 9 && *p <= 13) || *p == ' ')
		p++;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			j *= -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		re = (re * 10) + (*p - '0');
		if (re > 9223372036854775807 && j == 1)
			return (-1);
		if (re > (unsigned long long)9223372036854775807 + 1 && j == -1)
			return (0);
		p++;
	}
	return (j * (int)re);
}